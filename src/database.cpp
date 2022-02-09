#include "../include/database.hpp"

#include <string>

using namespace std;

void Database::recebe_dados(string nome_arquivo){
    string l_dataString;                    //<!Variável auxiliar para capturar os dados do arquivo
    int l_n = nome_arquivo.size();          //<!Variável auxiliar para pegar o tamanho do nome do arquivo de dados

    //para verificar se o arquivo de dados possui extensão correta
    if(nome_arquivo[l_n-1] != 'v' || nome_arquivo[l_n-2] != 's' || nome_arquivo[l_n-3] != 'c'){
        interf_imprime.erro_arquivo_dados_ext();
    }

    data_arquivo.open(nome_arquivo, ios::in);

    if(data_arquivo.is_open()){
        interf_imprime.databaseOk(nome_arquivo);

        while(getline(data_arquivo, l_dataString)){
            data_dados.push_back(l_dataString);
        }
    }
    else{
        interf_imprime.erro_arquivo_dados();
    }

    data_arquivo.close();
}

void Database::processa(){
        string l_str;

        //armazenar as STRs da base de dados
        for(int i = 0; i < data_dados[0].size(); i++){
            if(data_dados[0][i] == ','){
                l_str = data_dados[0].substr(i+1, 4);
                data_STRs.push_back(l_str);
            }
        }

        //armazenar as ocorrências das STRs
        for(int i = 1; i < data_dados.size(); i++){
            for(int j = 0; j < data_dados[i].size(); j++){
                if(data_dados[i][j] == ','){
                    l_str = data_dados[i].substr(j+1, 1);
                    data_ocorrencias.push_back({i, stoi(l_str)});
                }
            }
        }
}

void Database::acusado(int linhaAcusado){
    if(linhaAcusado != -1){
        size_t pos = data_dados[linhaAcusado].find_first_of(',');

        interf_imprime.acusado(data_dados[linhaAcusado].substr(0, pos));
    }
    interf_imprime.acusado("");
}

void Database::procura_perfil(vector<int>& perfil_gerado){
    int l_matches;

    interf_imprime.imprime_perfil_gerado(perfil_gerado, data_STRs);

    for(int i = 0; i < data_ocorrencias.size();){
        l_matches = 0;
        for(int j = 0; j < perfil_gerado.size();){
            if(data_ocorrencias[i].second == perfil_gerado[j]){
                l_matches++;
                if(l_matches == perfil_gerado.size()){
                    acusado(data_ocorrencias[i].first);
                }
                j++;
                i++;
            }
            else{
                i += perfil_gerado.size() - l_matches;
                break;
            }
        }
    }

    acusado(-1);
}

vector<string>* Database::getSTRs(){
    return &data_STRs;
}

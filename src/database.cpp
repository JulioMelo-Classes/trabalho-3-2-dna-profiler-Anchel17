#include "../include/database.hpp"

#include <iostream>
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
            data_dadosBrutos.push_back(l_dataString);
        }
    }
    
        /*
        for(int i = 0; i < data_dadosBrutos.size(); i++){
            cout<<data_STRs[i]<<endl;
        }

        for(int i = 0; i < data_ocorrencias.size(); i++){
            cout<<data_ocorrencias[i]<<endl;
        }

        for(int i = 0; i < data_dadosBrutos.size(); i++){
            cout<<"vec["<<i<<"]: ";
            cout<<data_dadosBrutos[i]<<endl;
        }
    }*/
    else{
        interf_imprime.erro_arquivo_dados();
    }

    data_arquivo.close();
}

void Database::processa(){
        string l_str;

        //armazenar as STRs da base de dados
        for(int i = 0; i < data_dadosBrutos[0].size(); i++){
            if(data_dadosBrutos[0][i] == ','){
                l_str = data_dadosBrutos[0].substr(i+1, 4);
                data_STRs.push_back(l_str);
            }
        }

        //armazenar as ocorrências das STRs
        for(int i = 1; i < data_dadosBrutos.size(); i++){
            for(int j = 0; j < data_dadosBrutos[i].size(); j++){
                if(data_dadosBrutos[i][j] == ','){
                    l_str = data_dadosBrutos[i].substr(j+1, 1);
                    data_ocorrencias.push_back(stoi(l_str));
                }
            }
        }
        
        dna_invest.analisa(data_STRs);
}
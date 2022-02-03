#include "../include/database.hpp"

#include <iostream>

using namespace std;

Database::Database(string nome_arquivo){
    string l_dataString;                    //<!Variável auxiliar para capturar os dados do arquivo
    int l_n = nome_arquivo.size();          //<!Variável auxiliar para pegar o tamanho do nome do arquivo de dados

    //para verificar se o arquivo de dados possui extensão correta
    if(nome_arquivo[l_n-1] != 'v' || nome_arquivo[l_n-2] != 's' || nome_arquivo[l_n-3] != 'c'){
        interf_imprime.erro_arquivo_dados_ext();
    }

    data_arquivo.open(nome_arquivo, ios::in);

    if(data_arquivo.is_open()){
        interf_imprime.databaseOk(nome_arquivo);

        while(getline(data_arquivo, l_dataString, ',')){
            data_dadosBrutos.push_back(l_dataString);
        }

        for(int i = 0; i < data_dadosBrutos.size(); i++){
            cout<<"vec["<<i<<"]: ";
            cout<<data_dadosBrutos[i]<<endl;
        }
    }
    else{
        interf_imprime.erro_arquivo_dados();
    }
}
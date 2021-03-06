#include "../include/interface.hpp"

#include <iostream>

using namespace std;

void Interface::boas_vindas(){
    cout<<"\n\n>>>      BEM-VINDO AO DNA_PROFILER         <<<"<<endl;
    cout<<">>> AGUARDE ENQUANTO VALIDAMOS OS ARQUIVOS <<<\n"<<endl;
}

void Interface::databaseOk(string nome_arquivo){
    cout<<">>> arquivo de dados ["<<nome_arquivo<<"] OK\n"<<endl;
}

void Interface::arq_dnaOk(string nome_arq){
    cout<<">>> arquivo de DNA desconhecido ["<<nome_arq<<"] OK\n\n"<<endl;
}

void Interface::erro_arquivo_dados(){
    cout<<">>> Erro ao abrir o arquivo da base de dados"<<endl;
    cout<<">>> Verifique se digitou o caminho e o nome do arquivo corretamente"<<endl;
    cout<<"\n   Modo de uso na linha de comando: "<<endl;
    cout<<"   ./dna_profiler -d ../data/arquivo_de_dados.csv -s ../data/arquivo_de_dna.txt\n"<<endl;
    exit(0);
}

void Interface::erro_arquivo_dados_ext(){
    cout<<">>> Erro! formato de arquivo de dados invalido! por favor, verifique se o arquivo de dados possui extensão '.csv'"<<endl;
    exit(0);
}

void Interface::erro_arquivo_dna(){
    cout<<">>> Erro ao abrir o arquivo de DNA"<<endl;
    cout<<">>> Verifique se digitou o caminho e o nome do arquivo corretamente"<<endl;
    cout<<"\n   Modo de uso na linha de comando: "<<endl;
    cout<<"   ./dna_profiler -d ../data/arquivo_de_dados.csv -s ../data/arquivo_de_dna.txt\n"<<endl;
    exit(0);
}

void Interface::acusado(std::string nomeAcusado){
    if(nomeAcusado != ""){
        cout<<"\n>>> ACUSADO: "<<nomeAcusado<<endl;
    }
    else{
        cout<<"\n\n>>> Ninguém foi acusado"<<endl;
    }

    exit(1);
}

void Interface::imprime_dna(string& dnaRecebido){
    cout<<"["<<dnaRecebido<<"]"<<endl;
}

void Interface::imprime_perfil_gerado(vector<int>& perfil, vector<string>& strs){
    cout<<">>>  perfil gerado  <<<\n\n";
    for(int i = 0; i < strs.size(); i++){
        cout<<"     "<<strs[i]<<": ";
        cout<<perfil[i]<<endl;
    }
}

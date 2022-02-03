#include <string>

#include "../include/dna.hpp"

using namespace std;

Dna::Dna(string nome_arq){
    dna_arquivo.open(nome_arq, ios::in);

    if(dna_arquivo.is_open()){
        interf_imp.arq_dnaOk(nome_arq);
        
        getline(dna_arquivo, dna_sequencia);
    }
    else{
        interf_imp.erro_arquivo_dna();
    }
}
#include <string>

#include "../include/dna.hpp"

using namespace std;

void Dna::recebe_sequencia(string nome_arq){
    dna_arquivo.open(nome_arq, ios::in);
    
    if(dna_arquivo.is_open()){
        interf_imp.arq_dnaOk(nome_arq);
        
        getline(dna_arquivo, dna_sequencia);
    }
    else{
        interf_imp.erro_arquivo_dna();
    }

    dna_arquivo.close();
}

vector<int> Dna::analisa(vector<string>& m_STRs){
    //inicializar os contadores
    for(int i = 0; i < m_STRs.size(); i++){
        dna_OcorrSTRs.push_back(0);
    }

    int l_maior = 0;

    for(int i = 0; i < dna_sequencia.size();){
        for(int j = 0; j < m_STRs.size();){
            if(dna_sequencia[i] == m_STRs[j][0] && dna_sequencia[i+1] == m_STRs[j][1]
            && dna_sequencia[i+2] == m_STRs[j][2] && dna_sequencia[i+3] == m_STRs[j][3]){
                l_maior++;
                i+=4;
            }
            else{
                if(l_maior > dna_OcorrSTRs[j]){
                    dna_OcorrSTRs[j] = l_maior;
                }
                l_maior = 0;
                j++;
            }
        }
        i++;
    }

    interf_imp.imprime_dna(dna_sequencia);

    return dna_OcorrSTRs;
}

vector<int>* Dna::getPerfil(){
    return &dna_OcorrSTRs;
}

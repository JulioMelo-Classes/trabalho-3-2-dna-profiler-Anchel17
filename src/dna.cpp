#include <string>
#include <iostream>

#include "../include/dna.hpp"

using namespace std;

//variável global enquanto n resolve o bug do dado desaparecer
string dna_sequencia;

void Dna::recebe_sequencia(string nome_arq){
    dna_arquivo.open(nome_arq, ios::in);
    
    if(dna_arquivo.is_open()){
        interf_imp.arq_dnaOk(nome_arq);
        
        dna_arquivo >> dna_sequencia;
    }
    else{
        interf_imp.erro_arquivo_dna();
    }

    dna_arquivo.close();
}

void Dna::analisa(vector<string> m_STRs){

    //dna_sequencia = "CCAGATAGATAGATAGATAGATAGATGTCACAGGGATGCTGAGGGCTGCTTCGTACGTACTCCTGATTTCGGGGATCGCTGACACTAATGCGTGCGAGCGGATCGATCTCTATCTATCTATCTATCTATCCTATAGCATAGACATCCAGATAGATAGATC";
    //inicializar os contadores
    for(int i = 0; i < m_STRs.size(); i++){
        dna_OcorrSTRs.push_back(0);
    }

    int maior = 0;

    for(int i = 0; i < dna_sequencia.size();){
        for(int j = 0; j < m_STRs.size();){
            if(dna_sequencia[i] == m_STRs[j][0] && dna_sequencia[i+1] == m_STRs[j][1]
            && dna_sequencia[i+2] == m_STRs[j][2] && dna_sequencia[i+3] == m_STRs[j][3]){
                maior++;
                if(maior > dna_OcorrSTRs[j]){
                    dna_OcorrSTRs[j] = maior;
                }
                i+=4;
            }
            else{
                maior = 0;
                j++;
            }
        }
        i++;
    }

    for(int i = 0; i < dna_OcorrSTRs.size(); i++){
        cout<<dna_OcorrSTRs[i]<<" ";
    }
    cout<<"\n";

    /*
    for(int i = 0; i < dna_sequencia.size() - 3;){
        if(dna_sequencia[i] == 'A' && dna_sequencia[i+1] == 'G'
        && dna_sequencia[i+2] == 'A' && dna_sequencia[i+3] == 'T'){
            maior_AGAT++;
            //se a sequência maior que a maior sequência registrada, guarda a nova sequência maior
            if(maior_AGAT > AGAT){
                AGAT = maior_AGAT;
            }

            i+=4;
        }
        else if(dna_sequencia[i] == 'A' && dna_sequencia[i+1] == 'A'
        && dna_sequencia[i+2] == 'T' && dna_sequencia[i+3] == 'G'){
            maior_AATG++;

            if(maior_AATG > AATG){
                AATG = maior_AATG;
            }

            i+=4;
        }
        else if(dna_sequencia[i] == 'T' && dna_sequencia[i+1] == 'A'
        && dna_sequencia[i+2] == 'T' && dna_sequencia[i+3] == 'C'){
            maior_TATC++;

            if(maior_TATC > TATC){
                TATC = maior_TATC;
            }

            i+=4;
        }
        else{      
            maior_AGAT = 0;
            maior_AATG = 0;
            maior_TATC = 0;
            i++;
        }
    }*/
}
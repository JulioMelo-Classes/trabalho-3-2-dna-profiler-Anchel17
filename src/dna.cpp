#include <string>
#include <iostream>

#include "../include/dna.hpp"

using namespace std;

Dna::Dna(string nome_arq){
    dna_arquivo.open(nome_arq, ios::in);

    if(dna_arquivo.is_open()){
        interf_imp.arq_dnaOk(nome_arq);
        
        getline(dna_arquivo, dna_sequencia);

        analisa();
    }
    else{
        interf_imp.erro_arquivo_dna();
    }
}

void Dna::analisa(){
    int maior_AGAT = 0;
    int maior_AATG = 0;
    int maior_TATC = 0;

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
    }

    cout<<"AGAT: "<<AGAT<<endl;
    cout<<"AATG: "<<AATG<<endl;
    cout<<"TATC: "<<TATC<<endl;
}
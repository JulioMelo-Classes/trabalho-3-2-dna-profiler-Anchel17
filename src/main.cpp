#include <iostream>
#include <cstring>

#include "../include/database.hpp"
#include "../include/dna.hpp"
#include "../include/interface.hpp"

using namespace std;

int main(int argc, char* argv[]){

    Interface interf_welcome;
    Dna sequencia;
    Database dados;

    interf_welcome.boas_vindas();
    
    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "-d") == 0){
            //passa o nome do arquivo para abrir em database
            dados.recebe_dados(argv[i+1]);
        }
        if(strcmp(argv[i], "-s") == 0){
            //passa o nome do arquivo para abrir em dna
            sequencia.recebe_sequencia(argv[i+1]);
        }
    }

    dados.processa();
        
    sequencia.analisa(*dados.getSTRs());

    dados.procura_perfil(*sequencia.getPerfil());

    return 0;
}

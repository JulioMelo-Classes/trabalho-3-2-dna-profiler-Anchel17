#include <iostream>
#include <cstring>

#include "../include/database.hpp"
#include "../include/dna.hpp"
#include "../include/interface.hpp"

using namespace std;

int main(int argc, char* argv[]){

    Interface interf_welcome;

    interf_welcome.boas_vindas();
    
    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "-d") == 0){
            //passa o nome do arquivo para abrir em database
            Database dados(argv[i+1]);
        }
        else if(strcmp(argv[i], "-s") == 0){
            //passa o nome do arquivo para abrir em dna
            Dna sequencia(argv[i+1]);
        }
    }

    return 0;
}
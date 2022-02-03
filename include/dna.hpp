#ifndef DNA_HPP
#define DNA_HPP

#include <fstream>

#include "../include/interface.hpp"

/**
*   Classe responsável por armazenar a informação que contém o DNA do indivíduo
*   e gerar o perfil com base em alguma STR
*/
class Dna{
    private:
        std::ifstream dna_arquivo;          //<!Arquivo contendo o dna do indivíduo a ser investigado        
    
        std::string dna_sequencia;          //<!Dna recebido do arquivo

        Interface interf_imp;              //<!Objeto para chamar os métodos de impressão

        //Aqui são uns contadores para testar se minha lógica para identificar está correta
        int AGAT = 0;

        int AATG = 0;

        int TATC = 0;
    public:

        /**
        *   Método construtor da classe Dna, recebe o nome do arquivo contendo
        *   a sequência de dna a ser avaliada
        */
        Dna(std::string nome_arq);

        /**
        *   Método para analisar o DNA e verificar as sequências
        */
        void analisa();
};
#endif
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
    public:

        /**
        *   Método construtor da classe Dna, recebe o nome do arquivo contendo
        *   a sequência de dna a ser avaliada
        */
        Dna(std::string nome_arq);
};
#endif
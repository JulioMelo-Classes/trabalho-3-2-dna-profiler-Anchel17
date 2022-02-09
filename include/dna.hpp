#ifndef DNA_HPP
#define DNA_HPP

#include <fstream>
#include <vector>
#include <string>

#include "./interface.hpp"

/**
*   Classe responsável por armazenar a informação que contém o DNA do indivíduo
*   e gerar o perfil com base em alguma STR
*/
class Dna{
    private:
        std::ifstream dna_arquivo;          //<!Arquivo contendo o dna do indivíduo a ser investigado        
    
        std::string dna_sequencia;          //<!Dna recebido do arquivo

        Interface interf_imp;              //<!Objeto para chamar os métodos de impressão

        std::vector<int> dna_OcorrSTRs;         //<!Vector contendo de contadores de ocorrência das STRs
    public:

        /**
        *   Método que recebe o arquivo contendo a sequência de dna 
        *   a ser avaliada
        *   @param string nome do arquivo contendo a sequência de DNA
        */
        void recebe_sequencia(std::string nome_arq);

        /**
        *   Método para analisar o DNA e verificar as sequências
        *   @param vector contendo as STRs a serem avaliadas
        */
        std::vector<int> analisa(std::vector<std::string>& m_STRs);

        /**
         * Método para retornar o perfil gerado com as ocorrências das STRs no DNA
         * @return vector contendo as ocorrências das STRs
         */
        std::vector<int>* getPerfil();
};
#endif

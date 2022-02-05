#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <fstream>
#include <vector>
#include <string>

#include "../include/interface.hpp"
#include "../include/dna.hpp"

/**
*   Classe responsável por armazenar a base de dados e busca de perfil
*/
class Database{
    private:

        std::ifstream data_arquivo;            //<!arquivo de dados .csv a ser aberto

        std::vector<std::string> data_dadosBrutos;       //<!Vector contendo dados antes de serem tratados

        std::vector<std::string> data_STRs;            //<!Vector de STRs

        //talvez guardar a informação de qual linha é a ocorrência ajude, fazendo um pair<int, int> onde o primeiro é a linha que ocorre e o segundo a ocorrência
        std::vector<int> data_ocorrencias;          //<!Vector contendo a quantidade de vezes que uma sequência de STR aconteceu

        Interface interf_imprime;                 //<!Objeto para imprimir mensagens de erro ao tentar abrir um arquivo inválido

        Dna dna_invest;             //<!Objeto para chamar a função de verificar as STRs

    public:

        /**
        *   Construtor da classe Database, recebe o nome do arquivo .csv para armazenar os dados
        *   @param string nome_arquivo, nome do arquivo
        */
        void recebe_dados(std::string nome_arquivo);

        /**
         * Método para processar os dados recebidos
         */
        void processa();
};

#endif
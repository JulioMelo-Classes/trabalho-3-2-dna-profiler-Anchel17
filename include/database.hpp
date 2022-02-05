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

        std::vector<std::string> data_dados;       //<!Vector contendo dados antes de serem tratados

        std::vector<std::string> data_STRs;            //<!Vector de STRs

        std::vector<int> perfil_gerado;         //<!Vector do perfil gerado pelo sequenciamento do DNA

        std::vector<std::pair<int, int>> data_ocorrencias;          //<!Vector contendo a linha referente ao dono das ocorrências e a quantidade de vezes que uma sequência de STR aconteceu

        Interface interf_imprime;                 //<!Objeto para imprimir mensagens de erro ao tentar abrir um arquivo inválido

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

        /**
         * Método que capta o nome do acusado caso ele tenha sido encontrado
         * @param int Índice do acusado no vector de dados
         */
        void acusado(int linhaAcusado);

        /**
         * Método para procurar o perfil gerado pelo DNA recebido
         * @param vector contendo as ocorrências das STRs
         */
        void procura_perfil();
};

#endif
#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <fstream>
#include <vector>
#include <string>

#include "../include/interface.hpp"

/**
*   Classe responsável por armazenar a base de dados e busca de perfil
*/
class Database{
    private:

        std::ifstream data_arquivo;            //<!arquivo de dados .csv a ser aberto

        std::vector<std::string> data_dadosBrutos;       //<!Vector contendo dados antes de serem tratados

        Interface interf_imprime;                 //<!Objeto para imprimir mensagens de erro ao tentar abrir um arquivo inválido

    public:

        /**
        *   Construtor da classe Database, recebe o nome do arquivo .csv para armazenar os dados
        *   @param string nome_arquivo, nome do arquivo
        */
        Database(std::string nome_arquivo);
};

#endif
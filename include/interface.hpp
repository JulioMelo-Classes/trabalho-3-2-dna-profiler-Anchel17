#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include <string>

/**
*   Classe responsável por ser a interface do programa
*/
class Interface{
    private:

    public:

        /**
        *   Método que informa ao usuário que o programa está lendo e validando
        *   os arquivos 
        */
        void boas_vindas();

        /**
        *   Método para imprimir que a leitura do arquivo de dados foi um
        *   sucesso
        *   @param string contendo o nome do arquivo de dados
        */
        void databaseOk(std::string nome_arquivo);

        /**
        *   Método para imprimir que a leitura do arquivo de dna a ser 
        *   avaliado foi um sucesso
        *   @param string contendo o nome do arquivo de dados
        */
        void arq_dnaOk(std::string nome_arq);
        
        /**
        *   Método para imprimir uma mensagem de erro caso o programa não
        *   consiga abrir o arquivo contendo os dados
        */
        void erro_arquivo_dados();

        /**
        *   Método para imprimir uma mensagem de erro caso o usuário passe
        *   um arquivo de dados com extensão diferente de csv
        */
        void erro_arquivo_dados_ext();

        /**
        *   Método para imprimir uma mensagem de erro caso o programa não
        *   consiga abrir o arquivo contendo o dna a ser inspecionado
        */
        void erro_arquivo_dna();
};

#endif
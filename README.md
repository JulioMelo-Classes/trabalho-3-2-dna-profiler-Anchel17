# DNA Profiler

## Para compilar

- Você deve possuir cmake com versão igual ou superior a 3.0

- Para compilar, digite em seu console:

```
mkdir build
cd build
cmake ../
cmake --build .
```

## Para executar

Com o programa compilado, você pode executar o DNA Profiler da seguinte maneira:
 
```
cd build
./dna_profiler -s ../data/arquivo_de_DNA.txt -d ../data/base_de_dados.csv
```

- Exemplo de execução:

```
./dna_profiler -s ../data/sequence_bob.txt -d ../data/data.csv
```

- Separei dois arquivos de base de dados onde é testado diferentes STRs
- Um dos arquivos possui várias STRs, enquanto o outro tem apenas duas

A ideia desses testes foi verificar que o programa recebe uma quantidade indeterminada de STRs
e funciona corretamente

- teste1.csv: 
 Este arquivo que possui mais STRs e mais DNAs a serem avaliadas para achar um acusado

- teste2.csv: 
 Este arquivo é o que possui menos STRs e menos DNAs a serem avaliadas para achar um acusado

# O QUE FALTA
- Imprimir o DNA com as sequências de STRs coloridas

# Avaliação

1. Ler e validar os argumentos da linha de comando | 4 / 10
- Aqui faltou validar as entradas: teste se o arquivo existe ou não, teste se os parâmetros estão ok

2. Ler e validar os dados da base de dados e armazená-los em uma classe apropriada | 8 / 10
- Faltou validar os dados da base

3. Separar a interface textual das demais classes do sistema concentrando os couts e cins em um único objeto | 8 / 10
- faltou a saída no formato correto

4. Implementação de uma classe para armazenar e validar o DNA de um indivíduo bem como realizar as operações de perfil | 10 / 10
- ok

5. Implementação eficiente através do uso de referencias, quando você julgar necessário | 10 / 10
- ok

## Demais quesitos (Critério | Peso)

1. Organização do código em src, include, data | 5
- ok

2. Documentação do código usando o padrão doxygen | 5
- ok

3. Implementação e documentação de arquivos de teste | 15
- ok
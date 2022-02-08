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

- teste1.csv
- 
Aqui é o arquivo que possui mais STRs e mais DNAs a serem avaliadas para achar um acusado

- teste2.csv

Este arquivo é o que possui menos STRs e menos DNAs a serem avaliadas para achar um acusado

# O QUE FALTA
- Imprimir o perfil de DNA gerado
- melhorar o desempenho do código utilizando referências, atualmente ele está "pronto" mas não é eficiente

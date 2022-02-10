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

# Checkin 1

1. Projete ao menos as 3 classes principais propostas para o programa. Não precisa implementar, apenas os .h são suficientes.
- Ok

2. Implemente a classe responsável por ler e armazenar as informações do banco de dados de entrada.
- ok

3. Escreva o main instanciando a do item 2 mostrando que ela funciona para carregar e armazenar as informações.
- ok

4. Escreva parte da classe responsável pela interface com o usuário, de forma que o usuário consiga ao menos digitar a alguma palavra no loop principal, mostrando uma interface similar à interface sugerida na atividade 3.2.
- ok

5. Use a classe implementada em 4 no main, para mostrar que ela funciona. Não precisa realizar qualquer busca no banco, se a entrada do usuário estiver sendo recebida e impressa no terminal já conta para esse checkin.
- ok

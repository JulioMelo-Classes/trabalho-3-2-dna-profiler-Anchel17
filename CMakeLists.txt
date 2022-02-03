cmake_minimum_required(VERSION 3.0)

### Executável
# Diretório contendo os .hpp
include_directories( include )

# Cria um executável com nome "dna_profiler"
add_executable( dna_profiler
                src/main.cpp
                src/interface.cpp
                src/database.cpp
                src/dna.cpp)

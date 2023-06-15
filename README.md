# Libtf

### Português | [English](./README_en.md)

## Bliblioteca de funções em C.

Esta biblioteca foi desenvolvida em ambiente **Linux** e contém um conjunto de funções padrão em **C** que foram implementadas e testadas por mim. Além de aprender sobre o funcionamento dessas funções, o objetivo deste projeto foi criar uma biblioteca útil que possa ser utilizada e aprimorada em outros projetos, incluindo futuros projetos da **[42 SP](https://github.com/gsmereka/42_Projects)**.

## Como Utilizar a Libft em seu projeto ?

1. Verifique as [Dependências](#dependências).
1. Clone o Repósitorio.
	- ```git clone https://github.com/gsmereka/Libft.git```
1. Compile a biblioteca.
	- cd libft.
	- make.
1. Inclua o cabeçalho da libft no cabeçalho do seu projeto. Você pode fazer isso adicionando a seguinte linha ao início do arquivo:
	- ```#include libtf/header/libft.h```
1. Compile seu projeto incluindo o arquivo libft.a, exemplo:
	- ```gcc seu_projeto.c Libft/libft.a -o seu_projeto``` 

## Dependências

- ```sudo apt-get update```
- bibliotecas
	- ```sudo apt-get install build-essential```
- Makefile
	- ```sudo apt-get install make```
- gcc
	- ```sudo apt-get install gcc```

## Funções.

| Função      | Descrição                                                                      |
| ----------- | ------------------------------------------------------------------------------ |
| ft_atoi     | Converte uma string em um valor inteiro.                                       |
| ft_isalpha  | Verifica se um caractere é uma letra do alfabeto.                              |
| ft_itoa     | Converte um número inteiro em uma string.                                      |
| ft_memmove  | Copia uma área de memória sobrepondo-se de forma segura.                       |
| ft_putnbr_fd| Escreve um número inteiro em um descritor de arquivo.                          |
| ft_strdup   | Cria uma cópia de uma string.                                                  |
| ft_strlcpy  | Copia uma string com um tamanho especificado.                                  |
| ft_strnstr  | Localiza a primeira ocorrência de uma substring em uma string com tamanho limitado. |
| ft_tolower  | Converte um caractere para minúsculo, se aplicável.                            |
| ft_bzero    | Preenche uma área de memória com zeros.                                        |
| ft_isascii  | Verifica se um caractere é um valor ASCII válido.                              |
| ft_memchr   | Procura por uma ocorrência de um byte em uma área de memória.                  |
| ft_memset   | Preenche uma área de memória com um byte específico.                           |
| ft_putstr_fd| Escreve uma string em um descritor de arquivo.                                 |
| ft_striteri | Aplica uma função a cada caractere de uma string.                              |
| ft_strlen   | Calcula o comprimento de uma string.                                           |
| ft_strrchr  | Localiza a última ocorrência de um caractere em uma string.                     |
| ft_toupper  | Converte um caractere para maiúsculo, se aplicável.                            |
| ft_calloc    | Aloca memória e inicializa com zeros.                                             |
| ft_isalnum   | Verifica se um caractere é alfanumérico.                                           |
| ft_isdigit   | Verifica se um caractere é um dígito decimal.                                      |
| ft_memcpy    | Copia uma área de memória.                                                        |
| ft_putendl_fd | Escreve uma string seguida de uma nova linha em um descritor de arquivo.           |
| ft_split     | Divide uma string em substrings com base em um caractere delimitador.              |
| ft_strchr    | Localiza a primeira ocorrência de um caractere em uma string.                      |
| ft_strlcat   | Concatena duas strings de forma segura, evitando estouro de buffer.                |
| ft_strncmp   | Compara os primeiros caracteres de duas strings até um tamanho especificado.       |
| ft_substr    | Extrai uma substring de uma string, com base em um índice inicial e um tamanho.    |
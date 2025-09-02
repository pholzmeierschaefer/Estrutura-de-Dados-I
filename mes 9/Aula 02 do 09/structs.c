/*
forma de empacotar varias variaveis em um unico tipo
    depois precisa uma variavel do tipo struct para usar

ex: struct aluno {char nome[50]; int idade; float nota;};

Costuma criar o tipo antes das funções e as variaveis depois nas funções

as variaveis struct podem ser ponteiros



#include <stdio.h>

struct tdata // cria o tipo
{
    int dia;
    int mes;
    int ano;
};

//                   {dia, mes, ano}
struct tdata data1 = {9, 11, 2003},
             data2 = {6, 12, 2005}; // cria as variaveis


tdata cria_data(int dia, int mes, int ano)
{
    tdata d;
    d.dia = dia;
    d.mes = mes;
    d.ano = ano;
    return d;
}



VETOR 

struct tdata d[10]; // vetor de 10 datas
d[0].dia = 06; // acessa o dia da primeira data
d[0].mes = 12;
d[0].ano = 2021;


typedef struct tdata Data; // cria um apelido para o tipo struct tdata
*/
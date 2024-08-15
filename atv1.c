/*

1. Construa um programa que define uma estrutura de tipo pessoa, depois, 
solicite inserção de dados para a estrutura de tipo pessoa e agora imprime a estrutura tipo pessoa.  

*/

#include <stdio.h>
#include <stdlib.h>

// Dado abstrato do ponto

typedef struct pessoa {
    char nome[30];
    int idade;
    float altura;
    
}Pessoa;


// Prototipo das funções

Pessoa entrada(void);
void imprimir(Pessoa dados);


// função main

int main (void){
    Pessoa dados;
// saida de dados
   dados = entrada();
    imprimir(dados);


    return 0;
}

// função de entrada

Pessoa entrada(void){
	Pessoa dados;
	
	printf("Digite o nome: ");
	scanf("%s",dados.nome);
	printf("Digite a idade: ");
	scanf("%d",&dados.idade);
	printf("Digite a altura: ");
	scanf("%f",&dados.altura);
	
	return dados;
}

// função de saída
void imprimir(Pessoa dados){
	printf("nome=%s idade=%d altura=%f\n",dados.nome,dados.idade,dados.altura);
}



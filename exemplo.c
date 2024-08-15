#include <stdio.h>
#include <stdlib.h>


// Dado abstrato do ponto
typedef struct ponto{
	int x, y;
}Ponto;

// Prototipo das funções
Ponto entrada(void);
void imprimir(Ponto a);

int main(void){
	Ponto bd[5];
	
	// bd[0].x=3;
	// Entrada de dados
	for(int i=0;i<5;i++){
		printf("Dados do ponto %i:\n\n",i+1);
		bd[i]=entrada();
		system("cls");
	}
	
	// Saída de dados
	printf("Os pontos sao: \n\n");
	for(int i=0;i<5;i++){
		imprimir(bd[i]);
	}
	
	return 0;
}

// função de entrada
Ponto entrada(void){
	Ponto a;
	
	printf("Digite x: ");
	scanf("%i",&a.x);
	printf("Digite y: ");
	scanf("%i",&a.y);
	
	return a;
}

// função de saída
void imprimir(Ponto a){
	printf("x=%i \ty=%i\n",a.x,a.y);
}
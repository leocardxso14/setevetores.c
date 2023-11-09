#include <stdio.h>
//Função para ordenar um valor em ordem crescente
void ordenarVetor( int vetor [], int tamanho) {
	int temp;
	for (int i=0; i < tamanho - 1; j < tamanho ; j++) {
		for (int j = i+1; j <tamanho; j++) {
	            if (veor [i] > vetor [j]) {
			    temp= vetor[i];
			   vetor[i] = vetor[j];
			  vetor[j] = temp;
		    }
		}
	}
}
int main() {
	int tamanho = 7
		int vetor[tamanho];
	//Solicitar que o usuario insira os valores 
	print("Digite 7 valores inteiros:\n");
	for (int i = 0; i < tamanho; i++) {
		scanf("%d",&vetor[i]);}
	//Chame  afuncao para ordenar o vetor 
	ordenarVetor(vetor, tamanho);
	//Apresente o resultado ordenado 
	printf("Valores organizados em ordem crescente :\n");
	for(int i = 0; i < tamanho; i++){
		printf("%D", vetor [i]);
	}
	return 0;
}



#include <stdio.h>

int main() {

	 //imprime cabeçalho do nosso jogo
	 printf("***************************************\n");
	 printf ("Bem vindo ao nosso jogo de adivinhação\n");
	 printf("***************************************\n");
 	
	 int numeroSecreto = 42;

	 int chute;

	 printf("qual é o seu chute?");
	 scanf("%d", &chute);
	 printf("seu chute foi %d, chute");

	 int acertou = (chute == numeroSecreto);

	 if (acertou){
	 printf("Parabéns! Você acertou!\n");
	 printf("Jogue de novo, você é um bom jogador!\n");
	 }

	int maior = chute > numeroSecreto;
	else {
		if(maior){
			printf("Seu chute foi maior que o número secreto\n");
		}

		if (chute < numeroSecreto){
			printf("Seu chute foi menor que o número secreto\n");
		}


	}
}


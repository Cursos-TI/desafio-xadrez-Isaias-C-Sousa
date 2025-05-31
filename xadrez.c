#include <stdio.h>

//FunC'C#o recursiva para movimentar a Torre (5 casas para a Direita)
void moverTorre(int casas) {
	if (casas > 0) {
		printf("Direita\n");
		moverTorre(casas - 1);
	}
}

//FunC'C#o recursiva para movimentar o Bispo (5 casas na diagonal: Cima Direita)
void moverBispo(int casas) {
	if (casas > 0) {
		printf("Cima Direita\n");
		moverBispo(casas - 1);
	}
}

//FunC'C#o recursiva para movimentar a Rainha (8 casas para a Esquerda)
void moverRainha(int casas) {
	if (casas > 0) {
		printf("Esquerda\n");
		moverRainha(casas - 1);
	}
}

//Movimento do Cavalo usando loops complexos (2 para cima e 1 para a direita)
void moverCavalo() {
	printf("\nMovimento do CAVALO:\n");
	
	int cima = 0;
	
	//Loop para moveer 2 vezes para cima
	while (cima < 2){
	    printf("Cima\n");
	    cima++;
    }
    
    //Depois, move 1 vez para a direita
    printf("Direita\n");
}

//Movimento adicional do Bispo com loops aninhados
void moverBispoAninhado(int casas) {
	printf("\nMovimento do BISPO com loops aninhados:\n");
	for (int i = 0; i < casas; i++) { // Vertical (Cima)
		for (int j = 0; j < 1; j++) { // Horizontal (Direita)
			printf("Cima Direita\n");
		}
	}
}

int main() {
	printf("Movimento da TORRE (recursivo):\n");
	moverTorre(5);

	printf("\nMovimento do BISPO (recursivo):\n");
	moverBispo(5);

	printf("\nMovimento da RAINHA (recursivo):\n");
	moverRainha(8);

	moverCavalo();

	moverBispoAninhado(5);

	return 0;

}
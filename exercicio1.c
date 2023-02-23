#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// Inicializa o gerador de números aleatórios com a hora atual
	srand(time(NULL));
	printf("Número aleatório: %d\n", rand() % 100);
	printf("Número aleatório: %d\n", rand() % 100);
	printf("Número aleatório: %d\n", rand() % 100);
	printf("Número aleatório: %d\n", rand() % 100);
	printf("Número aleatório: %d\n", rand() % 100);
	return 0;
}
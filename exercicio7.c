#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
srand(time(NULL));
int aleatorio = rand() % 10 + 1;
int numero;
printf("Adivinhe o número entre 1 e 10: ");
scanf("%d", &numero);
if (aleatorio == numero) {
        printf("Acertou. O número era %d.\n", aleatorio);
    } else {
        printf("Errou. O correto é %d.\n", aleatorio4);
    }
	return 0;
	
}
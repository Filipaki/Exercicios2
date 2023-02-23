#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char frase[60];
    int num;
    printf("Insira uma frase: ");
    fgets (frase, 100, stdin);
    frase = frase.replace(" ", "");
    num = strlen(frase);
    printf("A frase contem %d caracteres.\n", num-1);
    return 0;
}
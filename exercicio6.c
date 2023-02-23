#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	float raiz;
	printf("Digite um numero que queira saber a raiz quadrada:");
	scanf("%d", &num);
	raiz = sqrt(num);
	printf ("A raiz e: %f", raiz);
	return 0;x''
}
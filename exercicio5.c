#include <math.h>
#include <stdio.h> 
#include <stdlib.h> 

int main(){
int numero1,numero2;
printf(" digite 2 numeros que voce queira multiplicar:\n");
gets(numero1);
gets(numero2);
int multiplicado;
multiplicado= numero1*numero2;
puts(multiplicado);
return 0;
}
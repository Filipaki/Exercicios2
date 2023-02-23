#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
  srand(time(NULL)); 
  int num1 = rand() % 991 + 10; 
  int num2 = rand() % 991 + 10; 
  
  int NumMaior = num1;
  if (num2 > NumMaior) {
    NumMaior = num2;
  }
  printf("Maior Numero: %d\n", NumMaior);

  return 0;
}

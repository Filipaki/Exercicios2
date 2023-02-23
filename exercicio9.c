#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("Olá, mundo! eu estou começando na programação.\n");
    return 0;
}

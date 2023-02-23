#include <stdio.h>
#include <time.h>

int main() {
    int anoN, idade;
    time_t now = time(NULL);
    struct tm *data_atual = localtime(&now);
    int anoA = dataA->tm_year + 1900;

    printf("Informe o ano de nascimento: ");
    scanf("%d", &anoN);

    idade = anoA - anoN;

    printf("Você fará %d anos este ano.\n", idade);

    return 0;
}

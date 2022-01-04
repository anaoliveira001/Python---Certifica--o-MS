#include <iostream>

int main()
{
    float DL, EU, LE;

    printf("\n 0Informe sua quantidade de dinheiro:\n");
    scanf("%f", &DL);

    EU = LE * 0.84;

    EU = DL * 1.13;

    printf("\nVoce possui %7.2f Euros, que equivale ah:\n", DL);

    printf("\n%2f Dolares\n", DL);

    printf("\n%2f Euros\n", EU);

    printf("\n%2f Libra Esterlina\n\n", LE);

    system("PAUSE");
}

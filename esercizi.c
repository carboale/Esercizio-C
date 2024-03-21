#include <stdio.h>

int main() {
    float lato, area, perimetro;

    printf("Inserisci la lunghezza del lato del quadrato: ");
    scanf("%f", &lato);

    area = lato * lato;

    perimetro = 4 * lato;

    printf("L'area del quadrato è: %.2f\n", area);
    printf("Il perimetro del quadrato è: %.2f\n", perimetro);

    return 0;
}
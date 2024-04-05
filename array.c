#include <stdio.h>

int main() {
    int numero;
    int array[10];
    
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    
    for (int i = 0; i < 10; i++) {
        array[i] = numero + i + 1;
    }
    
    printf("Array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}












  
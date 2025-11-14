#include <stdio.h>
#include <unistd.h>

int main() {
    int a, b, suma, resta, multi;

    printf("Intrese el primer número: ");
    scanf("%d", &a);

    printf("Ingrese el segundo número: ");
    scanf("%d", &b);

    printf("Realizando cálculos...\n");
    for(int i = 0; i < 100000000; i++) {
        suma = a + b;
        resta = a - b;
        multi = a * b;
    }

    printf("Resultados: \n");
    printf("%d + %d = %d\n", a, b, suma);
    printf("%d - %d = %d\n", a, b, resta);
    printf("%d * %d = %d\n", a, b, multi);

    printf("\nPresiona Enter para salir...");
    getchar();
    getchar();

    return 0;
}
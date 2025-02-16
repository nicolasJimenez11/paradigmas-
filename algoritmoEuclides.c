#include <stdio.h>

// Función para calcular el MCD usando el algoritmo de Euclides iterativo
int mcd_iterativo(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Introduce el primer número: ");
    scanf("%d", &num1);

    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    int resultado = mcd_iterativo(num1, num2);

    printf("El MCD de %d y %d es: %d\n", num1, num2, resultado);

    return 0;
}

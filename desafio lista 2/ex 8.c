#include <stdio.h>

int main() {
    int num1, num2;
    int maior, menor;

    // Leitura dos n?meros
    printf("Digite dois n?meros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    // Determinando o maior n?mero
    if (num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }

    // Exibi??o do resultado
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);

    return 0;
}

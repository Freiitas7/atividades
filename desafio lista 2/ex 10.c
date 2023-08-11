#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Leitura das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // C?lculo da m?dia
    media = (nota1 + nota2 + nota3) / 3;

    // Verifica??o da situa??o do aluno
    if (media >= 6) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 4) {
        printf("Situacao: Recupera??o\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}

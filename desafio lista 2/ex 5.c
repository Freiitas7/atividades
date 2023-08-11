#include <stdio.h>

int main() {
    char nomeMercadoria[100];
    float preco, novoPreco;

    // Leitura do nome da mercadoria
    printf("Digite o nome da mercadoria: ");
    fgets(nomeMercadoria, sizeof(nomeMercadoria), stdin);

    // Leitura do pre?o da mercadoria
    printf("Digite o preco da mercadoria: ");
    scanf("%f", &preco);

    // C?lculo do novo pre?o com base no aumento
    if (preco < 1000) {
        novoPreco = preco * 1.05; // Aumento de 5%
    } else {
        novoPreco = preco * 1.07; // Aumento de 7%
    }

    // Exibi??o do nome da mercadoria e do novo pre?o
    printf("Nome da mercadoria: %s", nomeMercadoria);
    printf("Novo preco da mercadoria: %.2f\n", novoPreco);

    return 0;
}

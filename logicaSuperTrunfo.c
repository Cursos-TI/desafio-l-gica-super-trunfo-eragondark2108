#include <stdio.h>
#include <string.h>

typedef struct {
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
} Cidade;

int main() {
    Cidade cidade1, cidade2;
    int escolha;

    // Cadastro da primeira cidade
    printf("Cadastro da primeira cidade:\n");
    printf("Código: ");
    scanf("%s", cidade1.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", cidade1.nome);
    printf("População: ");
    scanf("%d", &cidade1.populacao);
    printf("Área (km2): ");
    scanf("%f", &cidade1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade1.pib);

    // Cadastro da segunda cidade
    printf("\nCadastro da segunda cidade:\n");
    printf("Código: ");
    scanf("%s", cidade2.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", cidade2.nome);
    printf("População: ");
    scanf("%d", &cidade2.populacao);
    printf("Área (km2): ");
    scanf("%f", &cidade2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Menu de comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\nComparação:\n");
    switch (escolha) {
        case 1:
            if (cidade1.populacao > cidade2.populacao)
                printf("%s venceu em população!\n", cidade1.nome);
            else if (cidade1.populacao < cidade2.populacao)
                printf("%s venceu em população!\n", cidade2.nome);
            else
                printf("Empate em população!\n");
            break;
        case 2:
            if (cidade1.area > cidade2.area)
                printf("%s venceu em área!\n", cidade1.nome);
            else if (cidade1.area < cidade2.area)
                printf("%s venceu em área!\n", cidade2.nome);
            else
                printf("Empate em área!\n");
            break;
        case 3:
            if (cidade1.pib > cidade2.pib)
                printf("%s venceu em PIB!\n", cidade1.nome);
            else if (cidade1.pib < cidade2.pib)
                printf("%s venceu em PIB!\n", cidade2.nome);
            else
                printf("Empate em PIB!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

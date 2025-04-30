#include <stdio.h>
//codigo de ambas as cartas funcionando,codigo dacarta 1 'am01' ,codigo da carta 2'se01',colocando o codigo todas a infoações são exibidas ..
int main() {
    char estado[20] = "amazonas";
    char a01[20] = "am01";
    char cidade[20] = "manaus";
    float populacao1 = 3941613;
    float km1 = 1571000;
    float pib1 = 54000000;
    int turistico = 40;

    printf("Digite o código: ");
    scanf(" %s", a01);  
    //usando o comando \n para pular a linha e as informações ficarem mais organisadas
    
    printf("Código da carta é: %s\n", a01);
    
    printf("Seu estado é: %s\n", estado);
    printf("A cidade é: %s\n", cidade);
    printf("A população é: %.2f\n", populacao1);
    printf("Área em km² é: %.2f\n", km1);
    printf("PIB do estado é: %.2f\n", pib1);
    printf("Quantidade de pontos turísticos é: %d\n", turistico);

    char estado2[20] = "sergipe";
    char a02[20] = "se01";
    char cidade2[20] = "aracaju";
    float populacao2 = 2210004;
    float km2 = 21938188;
    float pib2 = 51860000 ;
    int turistico2 = 60;

    printf("\nDigite o código: ");
    scanf(" %s", a02);
    

    printf("Código da carta é: %s\n", a02);
    printf("O estado é: %s\n", estado2);
    printf("A cidade é: %s\n", cidade2);
    printf("A população é: %.2f\n", populacao2);
    printf("Área em km² é: %.2f\n", km2);
    printf("PIB do estado é: %.2f\n", pib2);
    printf("Quantidade de pontos turísticos é: %d\n", turistico2);

    return 0;
}

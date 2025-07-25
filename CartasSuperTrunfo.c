#include <stdio.h>

int main () {
    char codigo1[3], codigo2[3], nome1[10], nome2[10], estado1, estado2;
    int populacao1, populacao2, qntpontos1, qntpontos2;
    float area1, area2, pib1, pib2;

    printf("Digite o primeiro estado, de 'a' até 'h': ");
    scanf(" %c", &estado1); 

    if (estado1 >= 'a' && estado1 <= 'h') {
        printf("Você digitou um estado válida: %c\n", estado1);
    } else {
        printf("primeiro estado inválido. Apenas estado1s de 'a' até 'h' são aceitos.\n");
    }
    printf("Digite o codigo da 1 carta: \n");
    scanf("%2s", &codigo1);

    printf("Digite o primeiro nome : \n");
    scanf("%9s", nome1);

    printf("Digite o numero de habitantes da primeira cidade : \n ");
    scanf("%d", &populacao1);

    printf("Digite a area do primeiro estado: \n ");
    scanf("%f", &area1);

    printf("Digite o pib do primeiro estado: \n ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da primeira cidade : \n ");
    scanf("%d", &qntpontos1);

    printf("Digite o 2 estado, de 'a' até 'h': ");
    scanf(" %c", &estado2); 

    if (estado1 >= 'a' && estado1 <= 'h') {
        printf("Você digitou um estado válida: %c\n", estado1);
    } else {
        printf("2 estado inválido. Apenas estado1s de 'a' até 'h' são aceitos.\n");
    }

    printf("Digite o codigo da 2 carta: \n");
    scanf("%2s", &codigo2);

    printf("Digite o segundo nome : \n");
    scanf("%9s", nome2);

    printf("Digite o numero de habitantes da 2 cidade : \n ");
    scanf("%d", &populacao2);

    printf("Digite a area do 2 estado: \n ");
    scanf("%f", &area2);

    printf("Digite o pib do 2 estado: \n ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da 2 : \n ");
    scanf("%d", &qntpontos2);


    printf("Carta1 \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo da carta: %c%s\n", estado1,codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf ("A populacao e : %d\n", populacao1);
    printf ("A area e de  : %.2f\n", area1);
    printf ("o pib e de : %.2f\n", pib1);
    printf ("A qnt de pontos e de  : %d\n", qntpontos1);

    printf("Carta2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo da carta: %c%s\n", estado2,codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf ("A populacao e : %d\n", populacao2);
    printf ("A area e de  : %.2f\n", area2);
    printf ("o pib e de : %.2f\n", pib2);
    printf ("A qnt de pontos e de  : %d\n", qntpontos2);



    return 0;
}

#include <stdio.h>

int main()
{
    int numero;
    printf("Para instalar, escolha uma das opções: Windows ou Linux.\n \n \n ");
    printf("Escolha um Sistema Operacional:");
    scanf("%d", &numero);
    switch(numero){
        case 1:
        printf("Windows");
        break;
        case 2:
        printf("Linux");
        break;
        default:
        printf("opção inválida");
       
    }
}

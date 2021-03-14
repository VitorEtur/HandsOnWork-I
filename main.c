#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
//Declarando variáveis:
int numero;
int NumDec, binario[45], aux, bin, dec = 0, i;
int main()
{
//Menu de opções:
Menu:
//Se o usuário digitar 1 irá iniciar a conversão de número decimal para binário.
//E se o usuário digitar 2 irá iniciar a conversão de número binário para decimal.
    system("color 9");
    printf("\n"); //Comando para imprimir na tela o que será digitado entre os parênteses.
    printf("-------------------------\n\n");
    printf("   Conversor Binario     \n\n");
    printf("-------------------------\n");
    printf("\n");
    printf("Converter DECIMAL para BINARIO - Digite 1\n");
    printf("Converter BINARIO para DECIMAL - Digite 2\n");
    printf("\nEscolha a opcao desejada: \n");
    scanf("%d", &numero); //Comando para coletar dados que o usuário digitar.
    switch(numero) //Switch case - Dá opção para o usuário escolher qual função fazer.

    {

    case 1:
        system("cls");
        printf("Digite um numero Decimal: \n");
        scanf("%d", &NumDec);

        for(aux= 44; aux >=0; aux--){
            binario[aux]=(NumDec % 2)==0 ? 0:1;
            NumDec = NumDec / 2;

    }

        printf("\n\t");
        for(aux=1; aux < 45; aux++){
            printf("%d", binario[aux]);
            if((aux%4)==0) //Separar o resultado binário a cada 4 caracteres dar um espaço. exemplo: 0000 0000.
                printf(" ");

    }

        break;

    case 2:
        system("cls"); //Comando para limpar a tela anterior.
        printf("Digite um numero Binario: \n");
        scanf("%d", &bin);
        for(i = 0; bin> 0; i++)

        {
            dec = dec + pow(2, i) * (bin % 10);
            bin = bin / 10;
        }

        printf("\nO numero Decimal e: %d", dec);
        return 0;
        system("pause");
        break;

    default:
        printf("Opcao Invalida\n"); //Se o usuário digitar um comando que não existe, irá aparecer opção inválida.

    }


    system("pause"); //Comando para pausar a tela, e o usuário confirmar para fechar o programa.

    goto Menu; //Comando para voltar ao início do sistema quando apresentar o resultado.

    return 0; //Retorna valor 0, sem erros, o processo foi bem sucedido.

}

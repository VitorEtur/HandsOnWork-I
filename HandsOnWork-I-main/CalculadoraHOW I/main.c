#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

//Declarando vari�veis:
int numero;
int NumDec, binario[45], aux, bin, dec = 0, i;
int main()


{
setlocale(LC_ALL, "Portuguese");
//Menu de op��es:
Menu:
    numero=0;
    NumDec=0, binario[45]=0, aux=0, bin=0, dec=0, i=0;

//Se o usu�rio digitar 1 ir� iniciar a convers�o de n�mero decimal para bin�rio.
//E se o usu�rio digitar 2 ir� iniciar a convers�o de n�mero bin�rio para decimal.
    system("color 9");
    printf("\n"); //Comando para imprimir na tela o que ser� digitado entre os par�nteses.
    printf("-------------------------\n\n");
    printf("   Conversor Bin�rio     \n\n");
    printf("-------------------------\n");
    printf("\n");
    printf("Converter DECIMAL para BIN�RIO - Digite 1\n");
    printf("Converter BIN�RIO para DECIMAL - Digite 2\n");
    printf("\nEscolha a op��o desejada: \n");
    scanf("%d", &numero); //Comando para coletar dados que o usu�rio digitar.
    switch(numero) //Switch case - D� op��o para o usu�rio escolher qual fun��o fazer.

    {

    case 1:
        system("cls");
        printf("Digite um n�mero Decimal: \n");
        scanf("%d", &NumDec);

        for(aux= 44; aux >=0; aux--){
            binario[aux]=(NumDec % 2)==0 ? 0:1;
            NumDec = NumDec / 2;

    }

        printf("\n\t");
        for(aux=1; aux < 45; aux++){
            printf("%d", binario[aux]);
            if((aux%4)==0) //Separar o resultado bin�rio a cada 4 caracteres dar um espa�o. exemplo: 0000 0000.
                printf(" ");

    }

        break;
Conversor2:

    case 2:
        system("cls"); //Comando para limpar a tela anterior.
        printf("Digite um n�mero Bin�rio: \n");
        scanf("%d", &bin);
        for(i = 0; bin> 0; i++)

        {
            dec = dec + pow(2, i) * (bin % 10);
            bin = bin / 10;
        }
        {


        printf("\nO numero Decimal �: %d", dec);
        printf("\n");
        getch;





        }

        break;

    default:
        printf("Op��o Inv�lida\n"); //Se o usu�rio digitar um comando que n�o existe, ir� aparecer op��o inv�lida.

    }



    goto Menu; //Comando para voltar ao in�cio do sistema quando apresentar o resultado.

    return 0; //Retorna valor 0, sem erros, o processo foi bem sucedido.


}

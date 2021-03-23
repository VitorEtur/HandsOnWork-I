    #include <stdio.h> //Biblioteca padrão da Linguagem C.
    #include <stdlib.h> //Biblioteca de propósito geral padrão da linguagem de programação C.
    #include <string.h> //Biblioteca que contém uma série de funções para manipular strings.
    #include <math.h> //Fornece um conjunto de funções para operações matemáticas.
    #include <conio.h> //Declara várias funções úteis da biblioteca para executar "entrada e saída istream" de um programa.
    #include <locale.h> //Adaptação deste às características de um determinado idioma ou de uma região.

    //Declarando variáveis:
    int numero;
    int NumDec, binario[45], aux, bin, dec = 0, i;
    int main()


    {
    setlocale(LC_ALL, "Portuguese"); //Necessário para usar acentuação.
    //Menu de opções:
    Menu:
        numero=0;
        NumDec=0, binario[45]=0, aux=0, bin=0, dec=0, i=0;
    //Se o usuário digitar 1 irá iniciar a conversão de número decimal para binário.
    //E se o usuário digitar 2 irá iniciar a conversão de número binário para decimal.
        system("color 9");
        printf("\n"); //Comando para imprimir na tela o que será digitado entre os parênteses.
        printf("-------------------------\n\n");
        printf("   Conversor Binário     \n\n");
        printf("-------------------------\n");
        printf("\n");
        printf("Converter DECIMAL para BINÁRIO - Digite 1\n");
        printf("Converter BINÁRIO para DECIMAL - Digite 2\n");
        printf("\nEscolha a opção desejada: \n");
        scanf("%d", &numero); //Comando para coletar dados que o usuário digitar.
        switch(numero) //Switch case - Dá opção para o usuário escolher qual função fazer.

        {

        case 1:
            system("cls");
            printf("Digite um número Decimal: \n");
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
    Conversor2:

        case 2:
            system("cls"); //Comando para limpar a tela anterior.
            printf("Digite um número Binário: \n");
            scanf("%d", &bin);
            for(i = 0; bin> 0; i++)

            {
                dec = dec + pow(2, i) * (bin % 10);
                bin = bin / 10;
            }
            {


            printf("\nO numero Decimal é: %d", dec);
            printf("\n");
            getch;





            }

            break;

        default:
            printf("Opção Inválida\n"); //Se o usuário digitar um comando que não existe, irá aparecer opção inválida.

        }



        goto Menu; //Comando para voltar ao início do sistema quando apresentar o resultado.

        return 0; //Retorna valor 0, sem erros, o processo foi bem sucedido.


    }

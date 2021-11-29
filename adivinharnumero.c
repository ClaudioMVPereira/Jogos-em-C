#include <stdio.h>
#include <string.h>

int main()
{

int num, adivinhar, tentativas = 0;
    srand(time(0));
    num = rand() % 100 + 1;

    printf("Jogo de Adivinhar o Numero\n\n");

    do
    {
        printf("Tente adivinhar um numero entre 1 a 100: ");
        scanf("%d", &adivinhar);
        tentativas++;

        if (adivinhar > num)
        {
            printf("Muito alto!\n\n");
        }
        else if (adivinhar < num)
        {
            printf("Muito baixo!\n\n");
        }
        else
        {
            printf("\nParabens! Voce acertou em %d tentativas!\n", tentativas);
        }

    }while (adivinhar != num);

  return 0;
}



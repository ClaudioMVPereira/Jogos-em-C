#include <stdio.h>
#include <string.h>

int main()
{
    printf("\tJogo da Forca\n\n");

    char palavrasecreta[20];

    sprintf(palavrasecreta, "PARALELEPIPEDO");

    int acertou = 0;
    int enforcou = 0;

    char chutes [26];
    char tentativas = 0;

    do {

        for (int i = 0; i < strlen (palavrasecreta); i++) {

            int achou = 0;

            for (int j = 0; j < tentativas; j++) {
            if (chutes[j] == palavrasecreta[i]) {
                achou = 1;
                break;
            }

        }

        if (achou) {

    printf("%c", palavrasecreta[i]);
    }else {
            printf(" _");
        }
}
        printf ("\n");
        char chute;
        scanf (" %c", &chute);

        chutes [tentativas] = chute;
        tentativas++;

    } while (!acertou && !enforcou);

    return 0;
}

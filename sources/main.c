/*-----------------------------------------------*
 *                                               *
 *       Created and developed by Seb2lyon       *
 *                  13/11/2016                   *
 *                 version 1.0b                  *
 *                                               *
 *-----------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0, j = 0, longueurPhrase = 0, longueurCle = 0, positionLettreClaire = 0, positionLettreChiffree = 0;
    char cle[100] = {0}, phraseClaire[500], alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

 
    printf("--- VIGENERE (Logiciel de chiffrement) ---\n\n\n");
    printf("Phrase a chiffrer : ");
    fgets(phraseClaire, 500, stdin);
    printf("\nCle : ");
    fgets(cle, 100, stdin);

    longueurCle = strlen(cle);
    cle[longueurCle - 1] = '\0';

    longueurPhrase = strlen(phraseClaire);
    phraseClaire[longueurPhrase - 1] = '\0';

    printf("\n\nPhrase chiffree : ");

    for(i = 0; i < longueurPhrase - 1; i++)
    {
        positionLettreClaire = 0;

        while(positionLettreClaire < 52 && phraseClaire[i] != alphabet[positionLettreClaire])
        {
            positionLettreClaire++;
        }

        if(positionLettreClaire >= 52)
        {
            printf("%c", phraseClaire[i]);
        }
        else
        {
            if(cle[positionLettreChiffree] == '\0')
            {
                positionLettreChiffree = 0;
            }

            j = 0;

            while(j < 52 && cle[positionLettreChiffree] != alphabet[j])
            {
                j++;
            }

            if((j + positionLettreClaire) > 25)
            {
                printf("%c", alphabet[j + positionLettreClaire - 26]);
            }
            else
            {
                printf("%c", alphabet[j + positionLettreClaire]);
            }

            positionLettreChiffree++;
        }
    }

    printf("\n\n\n\n\n...Fin du programme (appuyez sur une touche)...");
    fgets(cle, 3, stdin);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreDeBatons = 20;
    int batonsRetire = 0;
    printf("Il y a %d batons\n", nombreDeBatons);

    char nomOrdi[] = "IDA";
    char prenom[100];

    printf("Bonjour, je suis %s, et vous ?\n", nomOrdi);

    scanf("%s", prenom);
    printf("Salut %s, pret pour une petite partie ?\n", prenom);

    printf("Je commence, je vais retirer 3 batons.\n");

    nombreDeBatons = nombreDeBatons - 3;


    while (nombreDeBatons > 0)
    {
        printf("Il reste %d batons\n", nombreDeBatons);
        printf("Combien de batons voulez vous retirer ? Retirez entre 1 et 3\n");


        scanf("%d", &batonsRetire);

        if (batonsRetire > 3 || batonsRetire <= 0)
        {
            printf("Vous ne pouvez retirer qu'entre 1 et 3 batons\n");
            batonsRetire = 0;
        }
        nombreDeBatons = nombreDeBatons - batonsRetire;

             if (nombreDeBatons > 0)
             {
                batonsRetire = 4 - batonsRetire;
                printf("Je vais retirer %d batons\n", batonsRetire);
             }
             else
             {
                 printf("désolé, vous avez perdu\n");
             }

        nombreDeBatons = nombreDeBatons - batonsRetire;
    }

    return 0;
}

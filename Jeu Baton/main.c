#include <stdio.h>
#include <stdlib.h>

void jeuIDA(int nombreDeBatons)
    {
        int batonsRetire;

        printf("Je commence, je vais retirer 3 batons.\n");

            nombreDeBatons = nombreDeBatons - 3;
            printf("Il reste %d batons\n", nombreDeBatons);

        while (nombreDeBatons > 0)
        {
            while (batonsRetire > 3 || batonsRetire <= 0)
            {
                printf("Combien de batons voulez vous retirer ? Retirez entre 1 et 3\n");
                scanf("%d", &batonsRetire);
                printf("Vous ne pouvez retirer qu'entre 1 et 3 batons\n");
           }
            nombreDeBatons = nombreDeBatons - batonsRetire;

                 if (nombreDeBatons > 0)
                 {
                    batonsRetire = 4 - batonsRetire;
                    printf("Je vais retirer %d batons\n", batonsRetire);
                 }
                 else
                 {
                     printf("Desole, vous avez perdu\n");
                 }

            nombreDeBatons = nombreDeBatons - batonsRetire;
            };
           printf("Want to replay ?\n");
        }

int main()
{
    int batonsRetire = 0;

    char nomOrdi[] = "IDA";
    char prenom[100];

    printf("Bonjour, je suis %s, et vous ?\n", nomOrdi);

    scanf("%s", prenom);
    printf("Salut %s, pret pour une petite partie ?\n", prenom);


    jeuIDA(20);




    //printf("Voulez-vous rejouer ? Rejouer : 1 Quitter : 0");
    //scanf("%d", &rejouer);
      //  if (rejouer > 1 || rejouer < 0)
        //{
          //  printf("Veuillez répondre par 1 ou 0\n");
            //rejouer = 0;
        //}
    printf("Merci d'avoir joue");

    return 0;
}

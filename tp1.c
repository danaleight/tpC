#include <stdio.h>
#include <stdlib.h>

int plusGrand();
int sommeDixEntiersNat();
int sommeSaisie();

int main(int argc, char **argv)
{
    //Exercice 1 :
    int age;
    printf("EXERCICE 1 :\n");
    printf("Quel est votre age ? ");
    scanf("%d", &age);
    printf("Bonjour vous avez %d ans !\n", age);
    printf("EXERCICE 2 :\nLe plus grand des nombres est : %d\n", plusGrand());
    printf("EXERCICE 3 :\nLa somme des dix entiers naturels est : %d\n", sommeDixEntiersNat());
    printf("EXERCICE 4 :\nLa moyenne des nombre saisie est : %d\n", sommeSaisie());
}

int plusGrand()
{
    int nb1 = 0, nb2 = 0, nb3 = 0;
    printf("Veuillez saisir 3 nombres : ");
    scanf("%d %d %d", &nb1, &nb2, &nb3);
    if(nb1>=nb2 && nb1>=nb3)
    {
        return nb1;
    }
    else if(nb2 >= nb3)
    {
        return nb2;
    }
    else
    {
        return nb3;
    }
}

int sommeDixEntiersNat()
{
    int result = 0;
    for (int i = 0 ; i < 10 ; i++)
    {
        result+=i;
    }
    return result;
}

int sommeSaisie()
{
    int result = 0;
    int occ = 0;
    int choix = 0;
    do
    {
        printf("Quel nombre voulez-vous ajouter ? ");
        scanf("%d", &choix);
        if (choix >= 0)
        {
            occ++;
            result+=choix;
        }
    }while (choix >= 0);
    return result/occ;
}
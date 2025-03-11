#include <stdio.h>

int main(void)
{
    int nbrQuestion = 500;
    int scoreUser = 423;

    //si on veut le pourcentage on applique la formule du pourcentage et il faut convertir les variables pour ne pas perdre les valeurs decimale en cas de division non ordinaire
    float pourcentageReussite = (float) scoreUser/nbrQuestion * 100.0;

    printf("Son score est de %.2f%c ", pourcentageReussite, 37 );

    return 0;
}
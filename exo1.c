#include <stdio.h>

int main(void)
{
    int x = 5 , y = 6 , z = 7; // Déclarations multiples pour des variables du même type. On évite car la lisibilité est moins bonne en général
    x = y = z = 5 ;  // Assignation multiples


    printf("Salut\n");

    return 0;
}
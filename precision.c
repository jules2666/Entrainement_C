#include <stdio.h>

int main(void)
{
   float cf = 1.25323;

   printf("%f", cf); // 6 digits affiché , config par défaut
   printf("%1.f\n", cf); // 1 chiffre affiché
   printf("%2.f\n", cf); // 2
   printf("%3.f\n", cf); // 3 
    return 0;
}
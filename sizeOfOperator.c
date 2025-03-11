#include <stdio.h>

int main(void)
{
   int a = 5;
   float b = 5.55;
   int c[20] = {50 , 40};

    printf("%lu\n",sizeof(a));
    printf("%lu\n",sizeof(b));
    printf("%lu\n",sizeof(c));
    

    return 0;
}
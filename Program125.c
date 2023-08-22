#include<stdio.h>

int main()
{
    int i = 0;
    printf("_____________________________________________________________");
   printf("ASCII table");
   printf("______________________________________________________________");

   printf("Character\t Decimal\t Hex\t Octal");

   for(i = 0; i<=127; i++)
   {
    printf("%c\t %d\t %x\t %o\n",i,i,i,i);
   }

   printf("\n_____________________________________________________________");
    return 0;
}
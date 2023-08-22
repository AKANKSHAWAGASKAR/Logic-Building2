#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char ch)
{
   
   if((ch >='A') && (ch<='Z') ||(ch >='a') &&(ch <='z'))
   {
      if((ch == 'C') ||(ch == 'c'))
      {
         printf("Your exam at 9.20 Am\n");
      }
      if((ch=='d')||(ch == 'D'))
      {
         printf("Your exam at 10.20 Am\n");
      }
      if((ch=='a')||(ch == 'A'))
      {
         printf("Your exam at 7 Am\n");
      }
      if((ch=='B')||(ch == 'b'))
      {
         printf("Your exam at 8 Am\n");
      }
   }
}
int main()
{
   char cValue ='\0';
   int iRet = 0;

   printf("Enter the division\n");
   scanf("%c",&cValue);

   DisplaySchedule(cValue);

   return 0;
}
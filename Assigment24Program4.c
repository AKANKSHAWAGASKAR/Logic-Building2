#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
   if((ch >='a') && (ch<='z') || (ch >='a') && (ch<='z'))
   //if((ch == '!') ||(ch == '#')||(ch == '@')||(ch== '$')||(ch== %)||(ch == &) ||(ch == ^)||(ch==*))
   {
      return FALSE;
   }
   else
   {
      return TRUE;
   }

}
int main()
{
   char cValue ='\0';
   BOOL bRet = FALSE;

   printf("Enter the character\n");
   scanf("%c",&cValue);

   bRet = ChkSmall(cValue);

   if (bRet==TRUE)
   {
      printf("it is special character");

   }
   else
   {
      printf("It is not a special character");
   }
   return 0;
}
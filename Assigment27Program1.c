#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
   while ( *str != '\0')
   {
    if(*str == ch)
    {
      break;
    }
    str++;
   }
   if(*str == '\0')
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
   char arr[20];
   char cValue ;
   BOOL bRet = FALSE;
   int iRet =0;

   printf("Enter string\n");
   scanf("%[^'\n']s",arr);

   printf("Enter the Character\n");
   scanf(" %c",&cValue);

   bRet = ChkChar(arr, cValue);

   if(bRet == TRUE)
   {
    printf("Character found");
   }
   else
   {
    printf("Chracter not found");
   }

   return 0;
}
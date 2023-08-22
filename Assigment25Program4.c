#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
   //if((ch >='a') && (ch<='z') || (ch >='a') && (ch<='z'))
   if((*str == 'a') ||(*str== 'i') || (*str == 'o')||(*str == 'e')||(*str == 'u'))
   {
      return TRUE;
   }
   else
   {
      return FALSE;
   }

}
int main()
{
   char arr[20];
   BOOL bRet = FALSE;

   printf("Enter the character\n");
   scanf("%[^'\n']s",arr);

   bRet = ChkVowel(arr);

   if (bRet==TRUE)
   {
      printf("it contains vowel character");

   }
   else
   {
      printf("There is no vowel");
   }
   return 0;
}
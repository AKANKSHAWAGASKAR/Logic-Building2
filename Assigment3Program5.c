#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel (char cNo)
{ 
  

  if((cNo == 'a' )||(cNo == 'i' )||(cNo == 'e' )||(cNo == 'o' )||(cNo == 'u' ))
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
char cValue = '\0';
BOOL bRet = FALSE;

   printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet==TRUE)
    {
      printf("It IS Vowel");
    } 
    else 
    {
      printf("It IS Not Vowel");
    }
    return 0;
    }

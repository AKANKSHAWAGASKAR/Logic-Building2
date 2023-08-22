#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


 void DisplayConvert(char cNo)
{ 
  if(cNo == 'a' && cNo<='z')
  {
   cNo = cNo -32;
    printf("%c\n",cNo);
  }
  else 
  if(cNo=='D' && cNo <'z')
  {
      cNo = cNo+32;
      printf("%c\n",cNo);
  }
}

int main()
{
char cValue = '\0';



   printf("Enter character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
    }

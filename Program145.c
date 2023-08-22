
// Accept input string  and one character from user and display its frequency

#include<stdio.h>
#include<stdbool.h>

bool Check(char *str,char ch)
{   
    bool bFalg = false;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            bFalg = true;
            break;
         }
        str++;
    }
    return bFalg;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter the string\n");
    scanf("%[^'\n]s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    bRet = Check(Arr, cValue);

    if(bRet == true)
    {
         printf("Character  is present in the string \n");
    }
    else
    {
        printf("Character  is not present in the string \n");
    }

    return 0 ;
}



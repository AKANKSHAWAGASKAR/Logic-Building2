#include<stdio.h>

char CharToggelX(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {   return ch + 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        return ch - 32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet = CharToggelX(cValue);

    printf("Toggeled character is case is : %c\n",cRet);

    return 0;

}

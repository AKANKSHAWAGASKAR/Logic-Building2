#include<stdio.h>

void DisplayR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
        DisplayR(str);
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);

    DisplayR(Arr);

    return 0;
}
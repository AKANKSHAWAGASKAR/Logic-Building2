#include<stdio.h>
#include<string.h>

int FirstChar(char *str,char ch)
{   
    int iCnt = 0, iPos1 = 0, iPos2 = 0, iCount = 0;

    for(iCnt = 0; iCnt <= strlen(str) ; iCnt++)
    {
        if(str[iCnt] == ch)
        {
            iCount++;

            if(iCount == 1)
            {
                iPos1 = iCnt;
                iPos2 = iCnt;
            }
            else
            {
                
                iPos2 = iCnt++;
            }
        }
    }
    return iPos1;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter the string\n");
    scanf("%[^'\n]s",Arr);

    printf("Please enter the character\n");
    scanf("%c\n",&cValue);

    iRet = FirstChar(Arr, cValue);

    printf("Character location is : %d\n", iRet);

    return 0 ;
}



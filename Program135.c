
// Accept full name and display

#include<stdio.h>

int strlenX(char *str)
{
    int iCnt =0, i = 0;

    while (str[i] != '\0')
    {
        iCnt++;
        i++;
    }
    return iCnt;

}
int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Please enter string \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("Number of character are %d\n",iRet);

    return 0;
}




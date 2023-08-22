// 10 Factors Display

#include<stdio.h>
#include<stdbool.h>

int CountDigit(int No)
{
    int iCnt = 0;

    while (No != 0)
    {
        iCnt++;
        No = No / 10;
    }
    return iCnt;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);

    iRet = CountDigit(Value);

    printf("Number of digits are : %d\n",iRet);
    
    return 0;
}
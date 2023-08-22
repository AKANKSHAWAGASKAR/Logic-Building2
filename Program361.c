
#include<stdio.h>
#include<stdbool.h>

int SumDigitR(int No)
{
    static int iSum = 0;
    int iDigit = 0;
    if (No != 0)
    {
        iDigit = No % 10;
        iSum = iSum + iDigit;
        No = No / 10;
        SumDigitR(No);
    }
    return iSum;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);

    iRet = SumDigitR(Value);
    
    printf("Number of digits are : %d\n",iRet);
    
    return 0;
}

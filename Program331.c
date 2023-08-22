//accept number from user and check 4th bit of that bit is ON or OFF
// Count left to write

#include<stdio.h>

typedef unsigned int UINT;

int CountOnBits(UINT No)
{
    int iCnt = 0;
    int Digit = 0;

    while (No != 0)
    {
        Digit = No % 2;
        iCnt = iCnt + Digit;
        No = No / 2;
    }
    return iCnt;
}

int main()
{
    UINT Value = 11;
    int Ret = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    Ret = CountOnBits(Value);

    printf("Number of bits which are ON are : %d\n",Ret);

    return 0;
}
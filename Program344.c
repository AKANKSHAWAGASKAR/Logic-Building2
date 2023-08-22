
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 0000    0000    0000    0000    0000    0000    0100    0000

// 0X0F0F0F0F

UINT OffBit(UINT No, UINT Pos)
{
    UINT iMask = 0X00000001;
    iMask = iMask << (Pos - 1);

    iMask = ~iMask;

    return (No & iMask);
}

int main()
{
    UINT Value = 0, Position = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    printf("Enter the Position :\n");
    scanf("%d",&Position);

    iRet = OffBit(Value, Position);

    printf("Updated number is : %d\n",iRet);

    return 0;
}
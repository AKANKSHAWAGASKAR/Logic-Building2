
#include<stdio.h>
#include<stdbool.h>

int SumDigitsR(int No)
{
    int iDigit = 0;
    int iSum = 0;

    if(No != 0)
    {
        iDigit = No % 10;
        iSum = iSum + iDigit;
        No = No /10;
        SumDigitsR(No);
    }
    return iSum;


}
 int  main()
 {
    int value = 0;
    int iRet = 0;

    printf("Enter The Number\n");
    scanf("%d",&value);

    iRet = SumDigitsR(value);

    printf("Number of digits are : %d\n",iRet);
    return 0;
 }
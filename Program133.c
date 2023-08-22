#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Please enter your full name\n");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    printf("Your full Name is : %s\n",Arr);

    return 0;
}
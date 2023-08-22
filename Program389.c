#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0, Length = 0;
    char Data[100];
    

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        return -1;
    }

    //read(kuthun,kashat,kiti)
    Length = read(fd,Data,13);


    printf("Data from file is :");
    write(1,Data,Length);
    
    return 0;
}

//0  Standrad Input device
//1  standrad Output device
//2  standrad error device
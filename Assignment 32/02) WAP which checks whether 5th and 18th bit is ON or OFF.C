#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT N)
{
    BOOL flag = 0;

    if(N & (1 << 4) && (N & (1 << 17)))
    {
        flag = 1;
    }

    return flag;
}

int main()
{
    UINT No = 0;
    BOOL Ret = 0;

    printf("\n Enter a number : ");
    scanf("%d",&No);

    Ret = ChkBit(No);

    if(Ret)
    {
        printf("\n 5th and 18th Bit of Given number %d is ON.",No);
    }
    else
    {
        printf("\n 5th and 18th Bit of Given number %d is OFF.",No);
    }

    getch();
    return 0;
}

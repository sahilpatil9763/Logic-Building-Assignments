#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT N)
{
    BOOL flag = 0;

    if(N &(1 << 14))
    {
        flag = 1;
    }

    return flag;
}

int main()
{
    UINT No = 0;
    BOOL Ret =0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    Ret = ChkBit(No);

    if(Ret)
    {
        printf("\n 15th Bit Of Given number %d is ON",No);
    }
    else
    {
        printf("\n 15th Bit Of Given number %d is OFF",No);
    }
    getch();
    return 0;
}

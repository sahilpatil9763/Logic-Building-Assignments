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

    if((N & (1 << 6)) && (N & (1 << 7)) && (N & (1 << 8)))
    {
        flag = 1;
    }

    return flag;
}
int main()
{
    UINT iValue=0;
    BOOL bRet=0;

    printf("\n Enter The Number : ");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);

    if(bRet)
    {
        printf("\n 7th, 8th and 9th Bit of Given number %d is ON.",iValue);
    }
    else
    {
        printf("\n 7th, 8th and 9th Bit of Given number %d is OFF.",iValue);
    }

    getch();
    return 0;
}

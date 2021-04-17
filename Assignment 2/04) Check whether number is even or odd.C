#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int No)
{
    if(No%2 == 0)
    {
        printf("\n Given number is EVEN.");
    }
    else
    {
        printf("\n Given number is ODD.");
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("\n Enter number :");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    return 0;
}

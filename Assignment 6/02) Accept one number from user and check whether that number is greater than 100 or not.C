#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int No)
{
    if(No > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("\n Please Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet ==TRUE)
    {
        printf("\n Greater");
    }
    else
    {
        printf("\n Smaller");
    }
    getch();
    return 0;
}

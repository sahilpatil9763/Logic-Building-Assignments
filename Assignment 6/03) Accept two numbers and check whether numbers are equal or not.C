#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int No1,int No2)
{
    if(No1 == No2)
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
    int iValue1 = 0 , iValue2 = 0;
    BOOL bRet = FALSE;

    printf("\nPlease enter two number: ");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("\nEqual");
    }
    else
    {
        printf("\nNot Equal");
    }
    return 0;
}

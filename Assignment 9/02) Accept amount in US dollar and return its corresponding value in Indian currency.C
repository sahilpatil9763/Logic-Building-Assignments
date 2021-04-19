#include<stdio.h>
#include<conio.h>

int DollarToINR(int $)
{
    int Rs = 0;
    Rs = $*74.83;

    return Rs;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter a number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("\n Value in INR is %d",iRet);

    return 0;
}

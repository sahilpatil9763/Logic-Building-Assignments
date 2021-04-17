#include<stdio.h>
#include<conio.h>

int MultFact(int iNo)
{
    int Mult = 1, i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i=iNo/2; i>=1; i--)
    {
        if(iNo%i == 0)
        {
            Mult = Mult*1;
        }
    }
    return Mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Factors of given %d is : %d",iValue,iRet);

    return 0;
}

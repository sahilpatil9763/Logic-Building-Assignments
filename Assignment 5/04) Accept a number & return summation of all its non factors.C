#include<stdio.h>
#include<conio.h>

int SumNonFact(int iNo)
{
    int i=0,Sum=0;

    for(i=2; i<iNo; i++)
    {
        if(iNo%i != 0)
        {
            Sum += 1;
        }
    }
    return Sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Sum :- %d",iRet);

    return 0;
}

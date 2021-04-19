#include<stdio.h>
#include<conio.h>

int EvenFactorial(int iNo)
{
    int Temp  = 0 , Fact = 1;

    for(Temp = iNo ; Temp > 1 ; Temp--)
    {
        if(Temp % 2 == 0)
        {
            Fact = Fact * Temp;
        }
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    getch();

    return 0;
}

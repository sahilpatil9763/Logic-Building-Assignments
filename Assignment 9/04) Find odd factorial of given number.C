#include<stdio.h>
#include<conio.h>

int OddFactorial(int iNo)
{
    int Temp  = 0 , Fact = 1;

    for(Temp = iNo ; Temp > 0 ; Temp--)
    {
        if(Temp % 2 == 1)
        {
            Fact = Fact * Temp;
        }
    }
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\nEnter a number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("\nOdd Factorial of number is %d ",iRet);

    getch();

    return 0;
}

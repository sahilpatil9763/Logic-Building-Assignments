#include<stdio.h>
#include<conio.h>

int Display(int iNo)
{
    if(iNo<10)
    {
        printf("\n HELLO");
    }
    else
    {
        printf("\n DEMO");
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

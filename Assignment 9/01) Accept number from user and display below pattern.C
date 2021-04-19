#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    for(int i=1; i<=iNo; i++)
    {
        printf(" * ");
    }
    for(int j=1; j<=iNo; j++)
    {
        printf( " # ");
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();

    return 0;
}

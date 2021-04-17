#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    for(int i=1; i<=iNo; i++)
    {
        printf(" $ * ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}

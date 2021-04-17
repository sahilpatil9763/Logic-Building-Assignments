#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    for(int i=1; i<=iNo; i++)
    {
        printf(" %d ",i);
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

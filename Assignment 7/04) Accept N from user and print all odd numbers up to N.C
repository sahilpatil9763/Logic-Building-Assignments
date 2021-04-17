#include<stdio.h>
#include<conio.h>

void OddDisplay(int iNo)
{
    int i,j;

    for(j=1, i=1; i<=iNo; i=i+2,j++)
    {
        printf(" %d ",i);
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

void Pattern(int n)
{
    for(; n%10 > 0; n /= 10)
    {
        for(int j = n%10; j > 0; j--)
        {
            printf(" * ");
        }

        printf("\n\n");
    }
    return;
}

int main()
{
    int iVal = 0;

    printf("\n Enter the Number : ");
    scanf("%d",&iVal);

    Pattern(iVal);

    getch();
    return 0;
}

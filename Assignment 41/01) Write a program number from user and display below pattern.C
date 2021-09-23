#include<stdio.h>
#include<conio.h>

void Pattern(int n)
{
    int rev = 0;

    for(; n%10 > 0; n = n/10)
    {
        rev = (rev * 10) + (n % 10);
    }
    for(; rev%10; rev /= 10)
    {
        for(int j = rev%10; j>0; j--)
        {
            printf(" * ");
        }

        printf("\n");
    }

    return;
}

int main()
{
    int iVal = 0;

    printf("\n Enter The Number : ");
    scanf("%d",&iVal);

    Pattern(iVal);

    getch();
    return 0;
}

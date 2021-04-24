/* Input : 5
   Output : A B C D E
*/


#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    char ch = 'A';
    for(int i=1; i<=iNo; i++)
    {
        printf(" %c ",ch);
        ch++;
    }
    return;
}

int main()
{
    int iValue = 0;

    printf(" \n Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}

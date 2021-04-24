 /*
        Input  : 5
        Output : 1 * 2 * 3 * 4 * 5 *
*/



#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    for(int i = 1 ; i <= iNo ; i++)
    {
        printf(" %d * ",i);
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}

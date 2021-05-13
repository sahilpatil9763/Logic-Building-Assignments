#include<conio.h>
#include<stdio.h>

void DisplayASCII()
{
    int i;

    for(int i;i<= 225; i++)
    {
        printf("\n %3d %9x %8o %6c",i,i,i,i);
    }
}
int main()
{
    DisplayASCII();

    getch();
    return 0;
}

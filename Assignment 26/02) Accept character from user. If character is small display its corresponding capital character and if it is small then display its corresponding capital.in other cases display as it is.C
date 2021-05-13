#include<stdio.h>
#include<conio.h>

void Display(ch)
{
    if(ch >= 65 && ch <= 90)
    {
        printf("It converts into : %c ",ch+32);
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("It converts into : %c ",ch-32);
    }

}
int main()
{
    char c = '\0';

    printf("\n Enter the Character : ");
    scanf("%c",&c);

    Display(c);

    getch();
    return 0;
}

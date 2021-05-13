#include<stdio.h>
#include<conio.h>
void Display(char ch)
{
    if(ch < 'a')
    {
        while(ch < 'Z')
        {
            ch++;
            printf(" %c ",ch);
        }
    }
    else
    {
        while(ch >= 'a')
        {
            ch--;
            printf(" %c ",ch);
        }
    }

    return;

}
int main()
{
    char cValue = '\0';

    printf("\nEnter the Character => ");
    scanf("%c",&cValue);

    Display(cValue);

    getch();
    return 0;
}

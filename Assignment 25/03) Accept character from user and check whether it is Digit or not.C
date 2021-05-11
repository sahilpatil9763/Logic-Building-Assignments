#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= 48 && ch <= 57)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("\nIt is Digit.");
    }
    else
    {
        printf("\nIt is not a Digit.");
    }

    getch();
    return 0;
}

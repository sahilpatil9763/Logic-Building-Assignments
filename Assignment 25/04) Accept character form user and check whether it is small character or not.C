#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chksmall(char ch)
{
    if(ch >= 97 && ch <= 122)
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

    bRet = Chksmall(cValue);

    if(bRet == TRUE)
    {
        printf("\n It is Small Character.");
    }
    else
    {
        printf("\n It is not a Small character.");
    }

    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(ch >= 33 && ch <=64)
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

    printf("\n Enter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(c);

    if(bRet == TRUE)
    {
        printf("\n It is a special character.");
    }
    else
    {
        printf("\n It is not a special character.");
    }

    getch();
    return 0;
}

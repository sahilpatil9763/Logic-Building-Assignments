#include<stdio.h>
#include<string.h>
#include<conio.h>

void StrRev(char *instr,char *outstr)
{
    int i = 0, j = 0;

    while(instr[i] != '\0')
    {
        i++;
    }
    i = i - 1;
    while(i >= 0)
    {
        outstr[j] = instr[i];
        j++;
        i--;
    }
    outstr[j] = '\0';

    return ;
}
int main()
{
    char cSrc[20] = "";
    char cDest[20] = "";

    printf("\n Enter a string : ");
    gets(cSrc);

    StrRev(cSrc,cDest);

    printf("\n Source string is : %s",cSrc);
    printf("\n Reverse string is : %s",cDest);

    getch();
    return 0;
}

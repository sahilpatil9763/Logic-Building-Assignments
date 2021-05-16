#include<stdio.h>
#include<string.h>
#include<conio.h>

int LastChar(char *str,char ch)
{
    int i = 0,temp = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            temp = i;
        }
        str++;
        i++;
    }
    return temp;
}

int main()
{
    char arr[20] = "\0";
    char cValue = '\0';
    int bRet = 0;

    printf("\n Enter string : ");
    gets(arr);

    printf("\n Enter the Character : ");
    cValue = getchar();

    bRet = LastChar(arr,cValue);

    printf("\n Character location is : %d",bRet);

    getch();
    return 0;
}

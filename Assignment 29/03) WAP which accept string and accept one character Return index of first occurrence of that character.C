#include<stdio.h>
#include<string.h>
#include<conio.h>

int CountChar(char *str,char ch)
{
    int i = 1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return i;
        }
        str++;
        i++;
    }

    return -1;
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

    bRet = CountChar(arr,cValue);

    printf("\n Character location is : %d",bRet);

    getch();
    return 0;
}

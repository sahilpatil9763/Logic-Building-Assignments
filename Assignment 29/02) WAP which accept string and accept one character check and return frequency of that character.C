#include<stdio.h>
#include<string.h>
#include<conio.h>

int CountChar(char *str,char ch)
{
    int i = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            i++;
        }
        str++;
    }

    return i;

}

int main()
{
    char arr[20] = "\0";
    char cValue = '\0';
    int bRet = 0;

    printf("\n Enter string : ");
    fgets(arr,20,stdin);

    printf("\n Enter the Character : ");
    scanf("%c",&cValue);

    bRet = CountChar(arr,cValue);

    printf("\n Character Frequency is %d",bRet);

    getch();
    return 0;
}

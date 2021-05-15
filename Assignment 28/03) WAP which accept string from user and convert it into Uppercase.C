#include<stdio.h>
#include<string.h>
#include<conio.h>

int strltu(char *str)
{

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[20]="";

    printf("\n Enter String : ");
    scanf("%[^\n]s",arr);

    strltu(arr);

    printf("Modified string is %s",arr);

    getch();
    return 0;
}

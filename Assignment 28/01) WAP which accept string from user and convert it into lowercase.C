#include<stdio.h>
#include<conio.h>
#include<string.h>

int strutl(char*str)
{
    int i=0;
    while(*str != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        str++;
    }

}

int main()
{
    char arr[20] = "";

    printf("\n Enter String : ");
    scanf("%[^\n]s",arr);

    strutl(arr);

    printf("\n Modified String is %s",arr);

    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

float DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {

        case 'A':
        case 'a':
            printf("7 AM");
            break;

        case 'B':
        case 'b':
            printf("8.30 AM");
            break;

        case 'C':
        case 'c':
            printf("9.20 AM");
            break;

        case 'D':
        case 'd':
            printf("10.30 AM");
            break;

    }
}

int main()
{
    char cValue = '\0';
    float bRet;

    printf("\n Enter your Division : ");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);

    getch();
    return 0;
}

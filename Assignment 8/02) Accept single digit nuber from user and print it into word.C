#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    switch(iNo)
    {
        case 0:
            {
                printf("\n Zero");
                break;
            }
        case 1:
            {
                printf("\n One");
                break;
            }
        case 2:
            {
                printf("\n Two");
                break;
            }
        case 3:
            {
                printf("\n Three");
                break;
            }
        case 4:
            {
                printf("\n Four");
                break;
            }
        case 5:
            {
                printf("\n Five");
                break;
            }
        case 6:
            {
                printf("\n Six");
                break;
            }
        case 7:
            {
                printf("\n Seven");
                break;
            }
        case 8:
            {
                printf("\n Eight");
                break;
            }
        case 9:
            {
                printf("\n Nine");
                break;
            }
             case -1:
            {
                printf("\nOne");
                break;
            }
        case -2:
            {
                printf("\nTwo");
                break;
            }
        case -3:
            {
                printf("\nThree");
                break;
            }
        case -4:
            {
                printf("\nFour");
                break;
            }
        case -5:
            {
                printf("\nFive");
                break;
            }
        case -6:
            {
                printf("\nSix");
                break;
            }
        case -7:
            {
                printf("\nSeven");
                break;
            }
        case -8:
            {
                printf("\nEight");
                break;
            }
        case -9:
            {
                printf("\nNine");
                break;
            }
        default:
            {
                printf("\nInvalid Number");
            }
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter number : ");
    scanf("%d"&iValue);

    Display(iValue);

    getch();
    return 0;
}

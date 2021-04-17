
//accept number of kilometers from user and return the estimated rent.

#include<stdio.h>
#include<conio.h>

int TouristBill(int iKilometer)
{
    int Res = 0;

    if(iKilometer < 100)
    {
        Res = iKilometer * 25;
    }
    else
    {
        Res = 100 * 25;
        Res = Res + ((iKilometer - 100)*15);
    }

    return Res;
}

int main()
{
    int Km = 0, Rent = 0;

    Up:
        printf("\n Enter the number of Kilometers from User : ");
        scanf("%d",&Km);

        if(Km == 0)
        {
            printf("\n Invalid input ");
            goto Up;
        }

        Rent = TouristBill(Km);

        printf("\n The Estimated rent is %d",Rent);

        getch();

        return 0;
}

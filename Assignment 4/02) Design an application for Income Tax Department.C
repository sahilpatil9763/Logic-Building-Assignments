#include<stdio.h>
#include<conio.h>

float IncomeTax(int Income)
{
    if(Income < 500000)
    {
        return 0;
    }
    else if(Income>=500000 && Income<1000000)
    {
        return((Income-499999)/100) * 10;
    }
    else if((Income>=1000000 && Income<2000000))
    {
        return(((Income-999999)/100)*10) + 50000;
    }
    else if(Income>=2000000)
    {
        return(((Income-1999999)/100)*100) + 50000 + 200000;
    }
}

int main()
{
    int Income = 0;
    float Tax = 0;

    printf("Enter The Income => ");
    scanf("%d",&Income);

    Tax = IncomeTax(Income);

    printf("Income = %d \n Tax = %0.0f",Income,Tax);

    return 0;
}

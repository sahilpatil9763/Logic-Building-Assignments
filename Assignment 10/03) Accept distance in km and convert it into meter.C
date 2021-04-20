#include<stdio.h>
#include<conio.h>

int KMtoMeter(int iNo)
{
    int meter = 0;

    meter = iNo * 1000;

    return meter;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\n Enter Distance = ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("\n %d KM to Meter conversion is : %d",iValue,iRet);

    getch();

    return 0;
}

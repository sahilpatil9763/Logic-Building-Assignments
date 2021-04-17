#include<stdio.h>

float Percentage(float Tmarks,float Omarks)
{
    float per;

    per = (Omarks / Tmarks) * 100.0;

    return per;

}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("\n Please enter total marks : ");
    scanf("%d",&iValue1);

    printf("\n Please enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf(" %.2f% %",fRet);

    return 0;
}

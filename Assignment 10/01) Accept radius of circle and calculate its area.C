// Consider value of PI as 3.14 (Area = PI*Radius*Radius)

#include<stdio.h>
#include<conio.h>

double CircleArea(float fRadius)
{
    float Area;

    Area = 3.14*fRadius*fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\n Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("\n Area of Circle : %f ",dRet);

    getch();

    return 0;
}

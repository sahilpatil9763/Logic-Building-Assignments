// Area = Width * Height

#include<stdio.h>
#include<conio.h>

double RectArea(float fWidth, float fHeight)
{
    float Area;

    Area = fWidth * fHeight;

    return Area;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("\n Enter width : ");
    scanf("%f",&fValue1);

    printf("\n Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %.3f",dRet);

    getch();

    return 0;
}

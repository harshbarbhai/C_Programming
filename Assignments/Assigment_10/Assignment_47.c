//write a program which accepts width & height of rectangle from user and calculate its area(Area=width*height)
//input:5.3  9.78
//output:51.834
#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////
//Function Name:RectArea
//Description:Calculate the area of rectangle
//input type:float,float
//output type:double
//Auther Name:Harsh Barbhai
//Date:01/11/2025
///////////////////////////////////////////////////////////////////////////////
double RectArea(float fWidth,float FHeight)
{
    double dArea=0.0;
    dArea=fWidth*FHeight;
    return dArea;
}
int main()
{
    float fValue1=0.0,fValue2=0.0;
    double dRet=0.0;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter height\n");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("Area of Rectangle is %lf:",dRet);
    return 0;
}
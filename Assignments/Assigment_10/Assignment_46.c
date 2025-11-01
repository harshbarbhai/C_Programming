//wrie program to calculate area of circle conside the value of PI=3.14
//input:5.3
//output:88.2026
#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////
//Function Name:CircleArea
//Description:Calculate the area of circle
//input type:float
//output type:double
//Auther Name:Harsh Barbhai
//Date:01/11/2025
///////////////////////////////////////////////////////////////////////////////
double CircleArea(float Radius)
{
    float PI=3.14;
    double fArea=0.0;
    fArea=PI*Radius*Radius;
    return fArea;

}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("Area of circle is %lf",dRet);
    return 0;
}

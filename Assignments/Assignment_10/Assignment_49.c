//write a program which accepts temperature in fehrenheite and convert it into celsius(1 celsius = (fehrenheit - 32)*(5/9))
//input:10
//output:-12.2222  (10 - 32)*(5/9)
#include<stdio.h>
///////////////////////////////////////////////////////////////////
//Function Name:FhtoCs
//Description:convert of fehrenheits to celsius
//input type:int
//output type:double
//Auther Name:Harsh Barbhai
//Date:02/11/2025
///////////////////////////////////////////////////////////////////
double FhtoCs(int fTemp)
{
    double iSum=0.0;
    iSum=((fTemp-32) * (5.0/9.0));
    return iSum;
}
int main()
{
    int fValue=0;
    double dRet=0.0;

    printf("Enter temperature in fahrenheit\n");
    scanf("%d",&fValue);

    dRet=FhtoCs(fValue);
    printf("temperature in celsius %lf:",dRet);

    return 0;
}
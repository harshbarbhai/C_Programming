//accept the number which accepts in square feet and converts into square meters(1 square feet=0.0929 square meter)
//input:5
//output:0.46515
#include<stdio.h>
///////////////////////////////////////////////////////////////////
//Function Name:SquareMeter
//Description:convert square feet to square meter
//input type:int
//output type:double
//Auther Name:Harsh Barbhai
//Date:02/11/2025
///////////////////////////////////////////////////////////////////
double SquareMeter(int iNo)
{
    double iSum=0.0;
    iSum=iNo*0.0929;
    return iSum;
}
int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);
    printf("are in square meter is %lf:",dRet);

    return 0;
}
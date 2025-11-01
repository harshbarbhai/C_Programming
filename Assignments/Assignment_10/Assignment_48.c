//accept the number from user in kilometer and return in meter
//input:5
//output:5000
#include<stdio.h>
///////////////////////////////////////////////////////////////////
//Function Name:KMtoMeter
//Description:convert kilometer to meter
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:01/11/2025
///////////////////////////////////////////////////////////////////
int KMtoMeter(int iNo)
{
    int iSum=0;
    iSum=iNo*1000;
    return iSum;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter Distance in kilometer\n");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf("Distance in Meter is %d:",iRet);

    return 0;
}
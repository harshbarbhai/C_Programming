#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////
//function Name:Pattern
//Description:pattern printing input:3 output:2 4 6
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:21/11/2025
///////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iSum=iCnt*2;
        printf("%d\t",iSum);  
    }
}
int main()
{
    int iValue=0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}
#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////
//function Name:Pattern
//Description:pattern printing input:5 output:5 # 4 # 3 # 2 # 1 #
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:21/11/2025
///////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);
        printf("#\t");
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
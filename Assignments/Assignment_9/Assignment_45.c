//write a program which accepts number from user and return difference between summation of all its even factors and odd factors.
//input:5
//output:-7  (8-15)

//input:10
//output:28895  (3840-945)
#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////
//Function Name:FactorialDiff
//Description:Display difference between even factorial and odd multiplication
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:31/10/2025
///////////////////////////////////////////////////////////////////////////////
int FactorialDiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0,fSum=1,nSum=1,Diff=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)==0)
        {
            fSum=fSum*iCnt;
        }
        else
        {
            nSum=nSum*iCnt;
        }
    }
    Diff=fSum-nSum;
    return Diff;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("%d",iRet);
    return 0;
}
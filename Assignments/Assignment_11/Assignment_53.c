#include<stdio.h>
///////////////////////////////////////////////////////////////////
//Function Name:RangeSum
//Description:To display the sum in range of start to end and if numbers is less than 0 and star no > end no return invalid input
//input type:int,int
//output type:int
//Auther Name:Harsh Barbhai
//Date:06/11/2025
///////////////////////////////////////////////////////////////////
int RangeSum(int iStart,int iEnd)
{
    int iCnt=0,iSum=0;
    if (iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        return 0;
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
    
        iSum=iSum+iCnt;  
    }
    return iSum;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    if(iRet!=0)
    {
        printf("Addition is %d",iRet);
    }
    else
    {
        printf("invalid input");
    }

    return 0;
}
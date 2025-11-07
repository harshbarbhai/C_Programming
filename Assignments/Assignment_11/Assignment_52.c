#include<stdio.h>
///////////////////////////////////////////////////////////////////
//Function Name:RangeDisplayEven
//Description:To display the even numbers in range of start to end
//input type:int,int
//output type:void
//Auther Name:Harsh Barbhai
//Date:06/11/2025
///////////////////////////////////////////////////////////////////
void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}
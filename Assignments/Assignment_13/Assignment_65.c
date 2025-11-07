#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////
//Function Name:sum_even_numbers
//Description:To find the sum of N even numbers
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:08/11/2025
/////////////////////////////////////////////////////////////////////////////
int sum_even_number(int limit)
{
    int iCnt=0,iSum=0;
    if(limit<0)
    {
        limit=-limit;
    }
    for(iCnt=1;iCnt<=(limit*2);iCnt++)
    {
        if((iCnt % 2)== 0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int limit,sum=0;
    printf("Enter number :");

    scanf("%d",&limit);
    sum=sum_even_number(limit);
    printf("sum is %d",sum);
    
    return 0;
}
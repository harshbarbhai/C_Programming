#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////
//Function Name:sum_natural_numbers
//Description:To take input from user and displlay sum of all natural numbers
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:08/11/2025
/////////////////////////////////////////////////////////////////////////////
int sum_natural_numbers(int limit)
{
    int iCnt=0,sum=0;
    if(limit<0)
    {
        limit=-limit;
    }
    
    
    for(iCnt=1;iCnt<=limit;iCnt++)
    {
        sum=sum+iCnt;
    }
    return sum;
}
int main()
{
    int limit=0,iSum=0;

    printf("Enter number:");

    scanf("%d",&limit);
    iSum = sum_natural_numbers(limit);

    printf("%d",iSum);
    return 0;
}
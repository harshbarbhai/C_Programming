#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//Function Name:sum_of_factors
//Description:To take input from user and display sum of factors
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:07/11/2025
/////////////////////////////////////////////////////////////////////////
int sum_of_factors(int number)
{
    if(number<0)
    {
        number=-number;
    }
    int iCnt=0;
    int fSum=0;
    for(iCnt=1;iCnt<=(number/2);iCnt++)
    {
        if((number % iCnt)==0)
        {
            fSum=fSum+iCnt;
        }
    }
    return fSum;
    
}
int main()
{
    int number=0,iSum=0;
    
    printf("Enter number :");
    scanf("%d",&number);
    iSum = sum_of_factors(number);
    printf("total factors are: %d",iSum);

    return 0;
}
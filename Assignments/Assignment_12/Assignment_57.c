#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//Function Name:count_factors
//Description:To take input from user and count total number of factors
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:07/11/2025
/////////////////////////////////////////////////////////////////////////
int count_factors(int number)
{
    if(number<0)
    {
        number=-number;
    }
    int iCnt=0;
    int fCount=0;
    for(iCnt=1;iCnt<=(number/2);iCnt++)
    {
        if((number % iCnt)==0)
        {
            fCount++;
        }
    }
    return fCount;
    
}
int main()
{
    int number=0,count=0;
    
    printf("Enter number :");
    scanf("%d",&number);
    count = count_factors(number);
    printf("total factors are: %d",count);

    return 0;
}
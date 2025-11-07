#include<stdio.h>
///////////////////////////////////////////////////////////////////
//Function Name:printf_factors
//Description:To take input from user and display factors
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:07/11/2025
///////////////////////////////////////////////////////////////////
void printf_factors(int number)
{
    int iCnt=0;
    if(number<0)
    {
        number=-number;
    }
    //time complexity O(n/2)
    for(iCnt=1;iCnt<=(number/2);iCnt++)
    {
        if((number % iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int number=0;
    
    printf("Enter number :");
    scanf("%d",&number);
    printf_factors(number);

    return 0;
}
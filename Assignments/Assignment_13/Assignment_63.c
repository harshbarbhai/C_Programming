#include<stdio.h>
///////////////////////////////////////////////////////////////////
//Function Name:printf_odd_numbers
//Description:To take input from user and display all odd numbers
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:08/11/2025
///////////////////////////////////////////////////////////////////
void print_odd_numbers(int limit)
{
    int iCnt=0;
    if(limit<0)
    {
        for(iCnt=limit;iCnt<=-(limit);iCnt++)
        {
            if((iCnt%2)!=0)
            {
                printf("%d\t",iCnt);
            }  
            
        }
    }
    
    for(iCnt=1;iCnt<=limit;iCnt++)
    {
        if((iCnt%2)!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int limit=0;

    printf("Enter number:");

    scanf("%d",&limit);
    print_odd_numbers(limit);
    return 0;
}
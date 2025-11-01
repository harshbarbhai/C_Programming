//write a program which accept number and display  even factors of that number with 
//input:10
//output:3840 (10 * 8 * 6 * 4 * 2)
#include<stdio.h>
///////////////////////////////////////////////////////////////////
//Function Name:DisplayEvenFactorial
//Description:Display even factorial multiplication
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:31/10/2025
///////////////////////////////////////////////////////////////////

void DisplayEvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo>0)
    {
        int iCnt=0;
        int iSum=1;
        for(iCnt=iNo;iCnt>=1;iCnt--)
        {
            if(iCnt%2==0)
            {
                iSum=iSum*iCnt;
            }
        }
        printf("%d",iSum);
    }
    else
    {
        printf("0");
    }
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    DisplayEvenFactorial(iValue);
    return 0;
}
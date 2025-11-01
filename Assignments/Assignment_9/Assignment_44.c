//write a program which accept number and display Odd factors of that number with 
//input:10
//output:945 (9*7*5*3*1)
#include<stdio.h>
///////////////////////////////////////////////////////////////////
//Function Name:DisplayOddFactorial
//Description:Display odd factorial multiplication
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:31/10/2025
///////////////////////////////////////////////////////////////////

void DisplayOddFactorial(int iNo)
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
            if(iCnt%2!=0)
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
    DisplayOddFactorial(iValue);
    return 0;
}
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////
//Function Name:DisplayDigit
//Description:Accept the number from user and display in reverse number
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:14/11/2025
/////////////////////////////////////////////////////////////////////////////
void DisplayDigit(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
}
int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    return 0;
}
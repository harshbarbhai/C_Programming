//accept the number from user and return in usd 1$=70rupes
//input:10
//output:700
#include<stdio.h>
///////////////////////////////////////////////////////////////////
//Function Name:Display
//Description:conversion from USD to rupees assuming 1Usd=70rupes
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:31/10/2025
///////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iSum=0;
    iSum=iNo*70;
    printf("%d",iSum);
}
int main()
{
    int iValue=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
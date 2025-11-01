//write a program which accept number from user and print that number of #,* on screen
//input:5
//output:*  *  *  *  *  #  #  #  #  #
#include<stdio.h>
///////////////////////////////////////////////////////////////////
//Function Name:Pattern
//Description:print pattern in *,# format
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:31/10/2025
///////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=(iNo*2);iCnt++)
    {
        if (iCnt<=iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
        
    }
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}
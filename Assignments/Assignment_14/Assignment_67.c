#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
//////////////////////////////////////////////////////////////////////////////////
//Function Name:CheckZero
//Description:Accept the number from user and check whether it contains o or not
//input type:int
//output type:boolean
//Auther Name:Harsh Barbhai
//Date:14/11/2025
//////////////////////////////////////////////////////////////////////////////////

BOOL CheckZero(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if (iNo==0)
    {
        return 1;
    }
    
    int iDigit=0;
    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        if(0==iDigit)  //industrial programing practice 
        {
            return 1;
        }
        
    }
    return 0;
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet=CheckZero(iValue);

    if(bRet==TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}
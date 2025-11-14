#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////
//Function Name:Count
//Description:Accept the number from user and count number less than 6 and print total count
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:14/11/2025
/////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(0==iNo)   //industrial programing practice 
    {
        iSum=1;
        return iSum;
    }
    int iDigit=0;
    
    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        if(iDigit<6)  
        {
            iSum=iSum+1;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0,bRet=0;
    printf("Enter number :");
    scanf("%d",&iValue);

    bRet=Count(iValue);
    printf("numbers less than 6 in given input are: %d",bRet);
    
    return 0;
}
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////
//Function Name:CountOdd
//Description:Accept the number from user and count number of odd numbers
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:14/11/2025
//////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{   
    
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    int iDigit=0;
    
    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        if(1==(iDigit%2))  //industrial programing practice
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

    bRet=CountOdd(iValue);
    printf("numbers of odd in given input are: %d",bRet);
    
    return 0;
}
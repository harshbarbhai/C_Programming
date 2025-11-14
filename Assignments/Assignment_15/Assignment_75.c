#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name:CountDiff
//Description:Accept the number from user and calculate Difference between summation of even digit and odd digit
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:14/11/2025
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{   
    int iOsum=0;
    int iEsum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    int iDigit=0;
    
    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        if(0==(iDigit%2))  //industrial programing practice 
        {
            iEsum=iEsum+iDigit;
        }
        else
        {
            iOsum=iOsum+iDigit;
        }
    }
    return iEsum-iOsum;
}

int main()
{
    int iValue=0,bRet=0;
    printf("Enter number :");
    scanf("%d",&iValue);

    bRet=CountDiff(iValue);
    printf("Difference between summation of even digit and odd digit is: %d",bRet);
    
    return 0;
}
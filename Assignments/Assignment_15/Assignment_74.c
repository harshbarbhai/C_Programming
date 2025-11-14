#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name:MultDigit
//Description:Accept the number from user and display multiplication of digits dont count 0 ex inpit:12003 output:6
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:14/11/2025
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultDigit(int iNo)
{
    int iSum=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(0==iNo)   //industrial programing practice 
    {
        iSum=0;
        return iSum;
    }
    int iDigit=0;
    
    
    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        if(iDigit>0)  
        {
            iSum=iSum*iDigit;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0,bRet=0;
    printf("Enter number :");
    scanf("%d",&iValue);

    bRet=MultDigit(iValue);
    printf("multiplication of digits is: %d",bRet);
    
    return 0;
}
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name:CountRange
//Description:Accept the number from user and cont numbers less than 7 and greater than 3 in given input
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:14/11/2025
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iSum=0;
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
        if(iDigit>3 && iDigit<7)  
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

    bRet=CountRange(iValue);
    printf("numbers less than 7 and greater than 3 in given input are: %d",bRet);
    
    return 0;
}
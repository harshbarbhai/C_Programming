#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////
//Function Name:Countfour
//Description:Accept the number from user and count number of 4 in that number
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:14/11/2025
//////////////////////////////////////////////////////////////////////////////////

int Countfour(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit=0;
    int iSum=0;
    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        if(4==iDigit) //industrial programing practice 
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

    bRet=Countfour(iValue);
    printf("numbers of 4 in given input are: %d",bRet);
    
    return 0;
}
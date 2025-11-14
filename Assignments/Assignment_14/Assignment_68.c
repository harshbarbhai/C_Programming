#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////
//Function Name:CountTwo
//Description:Accept the number from user and count number of 2 in that number
//input type:int
//output type:int
//Auther Name:Harsh Barbhai
//Date:14/11/2025
//////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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
        if(2==iDigit) //industrial programing practice 
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

    bRet=CountTwo(iValue);
    printf("numbers of two in given input are: %d",bRet);
    
    return 0;
}
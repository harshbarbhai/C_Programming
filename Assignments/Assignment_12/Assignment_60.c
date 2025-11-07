#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////////////
//Function Name:is_divisible_by_five
//Description:To take input from user and check whether divisible by five
//input type:int
//output type:boolean
//Auther Name:Harsh Barbhai
//Date:08/11/2025
/////////////////////////////////////////////////////////////////////////
bool is_divisible_by_five(int number)
{   
    if((number % 5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number=0;
    bool bRet=false;
    
    printf("Enter Number:");
    scanf("%d",&number);

    bRet=is_divisible_by_five(number);
    if(bRet==true)
    {
        printf("%d is divisible by five",number);
    }
    else
    {
        printf("%d is not divisible by five",number);

    }
    
    return 0;
}
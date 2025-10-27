//write a program which accepts one number from user and check whether that number is greater than 100 or not
//input:101
//output:Greater 

//input:39
//output:smaller
#include<stdio.h>
#include<stdbool.h>
bool CheckGreater(int iNo)
{
    if (iNo>100)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
// time complexity=O(1)
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CheckGreater(iValue);
    if(bRet==true)
    {
        printf("Greater");

    }
    else
    {
        printf("Smaller");
    }
    return 0;
}
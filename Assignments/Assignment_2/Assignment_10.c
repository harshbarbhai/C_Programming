//accept number from user and check whether even or odd
#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
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
    int iValue=0;
    bool bRet=false;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);

    if(bRet==true)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    return 0;
}
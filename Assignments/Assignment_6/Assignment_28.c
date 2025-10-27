//write a program which accepts two number and check whether numbers are equal or not
#include<stdio.h>
#include<stdbool.h>
bool CheckEqual(int iNo1,int iNo2)
{
    if (iNo1==iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
//time complexitu o(1)
int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;

    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second number\n");
    scanf("%d",&iValue2);

    bRet=CheckEqual(iValue1,iValue2);
    if(bRet==true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equla");
    }
    return 0;
}
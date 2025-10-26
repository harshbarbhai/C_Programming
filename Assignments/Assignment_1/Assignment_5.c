//accept the number from user and print that number of * on screen
#include<stdio.h>
void Accept(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }

    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("*");
    }
    
}
int main()
{
    int iValue=0;
    printf("enter the value\n");
    scanf("%d",&iValue);
    Accept(iValue);
    return 0;
}
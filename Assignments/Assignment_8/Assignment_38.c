//write a program to find factors of given number
//input:5
//output:120  (5*4*3*2*1)

//input:-5
//output:120  (5*4*3*2*1)

#include<stdio.h>
int Factorial(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    if (iNo==0)
    {
        return 0;
    }
    
    
    int iCnt=0,iFact=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;
    
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial of number is:%d",iRet);
    return 0;
}

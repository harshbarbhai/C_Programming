//write A program which accepts three numbers and print its multiplication
//onput:5  4  7
//output:140
#include<stdio.h>
int Multiply(int iNO1,int iNo2,int iNo3)
{
    int mSum=0;
    if(iNO1==0 || iNo2==0 || iNo3==0)
    {
        return 0;
    }
    else
    {
        mSum=iNO1*iNo2*iNo3;
        return mSum;

    }
}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iRet=0;
    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second number\n");
    scanf("%d",&iValue2);

    printf("Enter third number\n");
    scanf("%d",&iValue3);

    iRet= Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is %d",iRet);
    return 0;
}

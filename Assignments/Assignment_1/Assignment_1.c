// divide two numbers

#include<stdio.h>

int Division(int iNo1,int iNo2)
{
    int iAns=0;
    if(iNo2 > iNo1 )
    {
        return -1;
    }
    else
    {
        iAns=iNo1/iNo2;
        return iAns;
    }
}
int main()
{
    int iValue1=15,iValue2=5;
    int iRet=0;
    iRet=Division(iValue1,iValue2);
    printf("Division is %d",iRet);
    return 0;
}
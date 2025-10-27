//write a program which accepts number from user and return difference between summation of all its factors and non factors.
//input:12
//output:-34  (16-50)

//input:10
//output:-29  (8-37)
#include<stdio.h>
int FactDiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0,fSum=0,nSum=0,Diff=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            fSum=fSum+iCnt;
        }
        else
        {
            nSum=nSum+iCnt;
        }
    }
    Diff=fSum-nSum;
    return Diff;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);
    return 0;
}
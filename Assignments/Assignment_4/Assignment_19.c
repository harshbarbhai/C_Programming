//write a program accept number from user and return summation of all its non factors
//input:12
//output:50  (5+7+8+9+10+11)

//input:10
//output:37  (3+4+6+7+8+9)
#include<stdio.h>
int SumNonFact(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0,fSum=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            fSum=fSum+iCnt;
        }
    }
    return fSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("%d",iRet);

    return 0;

}
//writ program which accept number from user and display its multiplication of factors
//input:12
//output:144   (1*2*3*4*6)

//input:13
//output:1

//input:10
//output:10   (1*2*5)

#include<stdio.h>
int MulFact(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0,fMul=1;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if ((iNo%iCnt)==0)
        {
            fMul=fMul*iCnt;
        } 
    }
    return fMul;
    
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=MulFact(iValue);
    printf("%d",iRet);
    return 0;
}
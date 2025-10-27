//write a program which accepts total marks and obtaind marks from user and calculate percentage
//input: 1000  745   
//output:74.5%
#include<stdio.h>
float Percentage(int iNo1,int iNo2)
{
    if(iNo1==0)
    {
        return 0.0;
    }
    else
    {
    float iSum=0;
    iSum=(((float)iNo2/iNo1)*100);
    return iSum;
    }
    
}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;

    printf("please enter total marks\n");
    scanf("%d",&iValue1);

    printf("please enter obtained marks\n");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);
    printf("percentage is:%f ",fRet);
    return 0;
}
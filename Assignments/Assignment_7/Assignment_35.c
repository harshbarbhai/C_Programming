//write a program which accepts N and print first 5 multiples of N
//input:4
//output:4  8  12  16  20
#include<stdio.h>
void MultipleDisplay(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=iNo;iCnt<=iNo*5;iCnt=iCnt+iNo)    //for(iCnt=iNo;iCnt<=iNo*5;iCnt++)
    {                                          //{
                                               //   if(iCnt%iNo == 0) 
        printf("%d\t",iCnt);                   //   {
    }                                          //       printf("%d\t",iCnt);
}                                              //    }
int main()                                     //}
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return 0;
}
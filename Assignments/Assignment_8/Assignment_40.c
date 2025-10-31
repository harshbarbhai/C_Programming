//write a program which accepts N and print first 10 multiples of N in reverse
//input:4
//output:40  36  32  28  24  20  16  12  8  4
#include<stdio.h>
void MultipleDisplay(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
     
    int iCnt=0;
    for(iCnt=iNo*10;iCnt>=iNo;iCnt=iCnt-iNo)    //for(iCnt=iNo*10;iCnt>=iNo;iCnt--)
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
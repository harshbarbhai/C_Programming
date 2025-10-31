//write a program which accept number from user and print its numbers line
//input:3
//output:-3  -2  -1  0  1  2  3
#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
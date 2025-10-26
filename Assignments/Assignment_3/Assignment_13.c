//write a program which accept number and display  even factors of that number with 
//input:24
//output: 2   4  6  8  12
#include<stdio.h>
void DisplayFactor(int iNo)
{
    int iCnt=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}
// input: 12  5
// output:12  12  12  12  12

// input:-2 3
// output:-2 -2 -2

// input:21 -3
// output:21 21 21

// input:-2 0
// output:
#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    if (iFrequency<0)
    {
        iFrequency=-iFrequency;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}
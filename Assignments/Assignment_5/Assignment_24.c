//check possitive,negative,zero
#include<stdio.h>
void CheckNumberType(int iNo)
{
    if(iNo==0)
    {
        printf("%d number is zero",iNo);
    }
    else if (iNo<0)
    {
        printf("%d number is negative",iNo);
    }
    else
    {
        printf("%d number is positive",iNo);
    }
    
}
int main()
{
    int iValue=0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    CheckNumberType(iValue);
    return 0;
}
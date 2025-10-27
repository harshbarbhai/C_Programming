//check even odd
#include<stdio.h>
void CheckEvenOdd(int iNo)
{
    if((iNo%2)==0)
    {
        printf("%d is even number",iNo);
    }
    else
    {
        printf("%d is odd number",iNo);
    }
}
int main()
{
    int iValue;

    printf("Enter number\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}
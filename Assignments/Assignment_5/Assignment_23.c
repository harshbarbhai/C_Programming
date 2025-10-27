//check leap year
#include<stdio.h>
void CheckLeapYear(int iYear)
{
    if((iYear%4)==0)
    {
        printf("%d is leap year",iYear);
    }
    else
    {
        printf("%d is not a leap year",iYear);
    }
}
int main()
{
    int iYear=0;
    printf("Enter year:");
    scanf("%d",&iYear);
    CheckLeapYear(iYear);
    return 0;
}
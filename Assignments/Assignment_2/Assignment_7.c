//accept the number from user and print that number of * on screen
#include<stdio.h>
void Display(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        printf("*");
        iNo--;
    }
    
}
int main()
{
    int iValue=0;
    printf("enter the value\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
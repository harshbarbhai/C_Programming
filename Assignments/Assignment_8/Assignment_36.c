//accept number from user and if number is less than 50 print small,if greater than 50 and less than 100 print medium if it is greater than 100 print large
#include<stdio.h>
void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if(iNo>50 && iNo<100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}
int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}
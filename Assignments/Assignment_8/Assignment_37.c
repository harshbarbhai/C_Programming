//accept singule number from user and print it into words
//input:9
//output:Nine

//input:-4
//output:Four

//input:10
//output:invalid number
#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo>9) 
    {
        printf("Invalid Number");
    }

    switch (iNo)
    {
        case 0:
        printf("Zero");
        break;

        case 1:
        printf("one");
        break;

        case 2:
        printf("two");
        break;

        case 3:
        printf("three");
        break;

        case 4:
        printf("four");
        break;

        case 5:
        printf("five");
        break;

        case 6:
        printf("six");
        break;

        case 7:
        printf("seven");
        break;

        case 8:
        printf("eight");
        break;

        case 9:
        printf("nine");
        break;
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
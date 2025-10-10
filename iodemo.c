#include<stdio.h>
int main()
{
    char div='\0';
    int age=0;

    printf("enter your division: \n");
    scanf("%c",&div);

    printf("enter your age:\n");
    scanf("%d",&age);

    printf("your division is %c\n:",div);
    printf("your age is %d:",age);
    return 0;

}
//write a program which accepts name from user and print that name 
//input:  Harsh Barbhai
//output: Harsh Barbhai
#include<stdio.h>
int main()
{
    char Name[30];
    printf("please enter full name\n");
    scanf("%[^\n]",Name);
    printf("your name is %s",Name);
    return 0;
}

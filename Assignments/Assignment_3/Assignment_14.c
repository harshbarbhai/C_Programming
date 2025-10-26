//accept the charactor from user and convert that charactor
//input: A     output: a
//input: d     output: D
//input: 1     output: please enter charactor

#include<stdio.h>
void DisplayConvert(int cValue)
{
    if(cValue>=65&&cValue<=91)
    {
        printf("%c",cValue+32);
    }
    else if(cValue>=97&&cValue<=123)
    {
        printf("%c",cValue-32);
    }
    else
    {
        printf("please enter charactor");
    }
    
}
int main()
{
    char cValue='\0';
    printf("Enter charactor\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}
//accept one charactor from user and check whether that charactor is vowel (a,e,i,o,u,A,E,I,O,U) or not
//input:E  output:true
//input:d  output:false
#include<stdio.h>
#include<stdbool.h>
bool CheckVowel(char cValue)
{
    if(cValue=='a' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u' || cValue=='A' || cValue=='E' || cValue=='I' || cValue=='O' || cValue=='U' )
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    char cValue='\0';
    bool bRet=false;
    printf("Enter charactor\n");
    scanf("%c",&cValue);
    bRet=CheckVowel(cValue);
    if(bRet==true)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }
    return 0;
}

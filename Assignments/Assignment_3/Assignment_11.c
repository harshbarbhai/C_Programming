//input:1
//output:2

//input:2
//output:2  4

//input:5
//output:2  4  6  8  10
#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=(iNo*2);iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("%d\t",iCnt);
        }
       
    }

}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}
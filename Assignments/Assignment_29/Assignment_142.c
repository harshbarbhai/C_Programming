#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////
//function Name:Pattern
//Description:pattern printing 
//input:iRow=4 iCol=4
//output: 
//2 4 6 8 10
//1 3 5 7 9
//2 4 6 8 10
//1 3 5 7 9
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:21/11/2025
///////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow,int iCol)
{
    int i=0,j=0,iSum=1,jSum=2;
    for(i=1;i<=iRow;i++)
    {
        for(j=0;j<=iCol;j++)
        {
            if((i%2)==1)
            {
                printf("%d\t",iSum);
                iSum=iSum+2;
            }
            else 
            {
                printf("%d\t",jSum);
                jSum=jSum+2;
            }
        }
        iSum=1;
        jSum=2;
        printf("\n");
    }
    
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter number of rows: ");
    scanf("%d",&iValue1);
    printf("Enter number of columns: ");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);

    return 0;
}
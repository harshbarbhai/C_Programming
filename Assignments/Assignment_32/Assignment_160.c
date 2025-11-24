#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////
//function Name:Pattern
//Description:pattern printing 
//input:iRow=4 iCol=4
//output: 
//1 2 3 4
//1 2   4
//1   3 4
//1 2 3 4
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:24/11/2025
///////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
   
    if(iRow==iCol)
    {
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                if(i==j || i==1 || i==iRow || j==1 ||j==iCol)
                {
                    printf("%d\t",j);
                }
                else 
                {
                    printf("\t");
                }
            }
            
            printf("\n");
        }
    }
    else 
    {
        printf("please enter same number of rows and columns");
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
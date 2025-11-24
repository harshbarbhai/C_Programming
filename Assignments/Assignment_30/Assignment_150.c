#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////
//function Name:Pattern
//Description:pattern printing 
//input:iRow=4 iCol=4
//output: 
//1 2 3 4
//1 * * 4
//1 * * 4
//1 2 3 4
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:22/11/2025
///////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        { 
            if(i==1 || i==iRow || j==1 || j==iCol)
            {
                printf("%d\t",j);
            }
            else 
            {
                printf("*\t");
            }

        }
        
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
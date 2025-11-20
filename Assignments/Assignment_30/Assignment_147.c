#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////
//function Name:Pattern
//Description:pattern printing 
//input:iRow=4 iCol=4
//output: 
//* * * *
//* * * #
//* * # #
//* # # #
//input type:int
//output type:void
//Auther Name:Harsh Barbhai
//Date:21/11/2025
///////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow,int iCol)
{
    int i=0,j=0,iSum=iRow;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        { 
            if(j<=iSum)
            {
                printf("*\t");
            }
            else 
            {
                printf("#\t");
            }

        }
        iSum--;
        
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
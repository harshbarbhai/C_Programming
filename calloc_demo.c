
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int length=0;
    int *arr=NULL;
    printf("enter the number of elements \n");
    scanf("%d",&length);
    //step1-allocate the memory
    arr=(int*)calloc(length,sizeof(int));
    if(arr == NULL)
    {
        printf("unable to allocate memory\n");

    }
    else
    {
        printf("memory gets successfully allocated\n");

    }
    
    //step2-use the memory
    //logic
    //step3- free the memory
    free(arr);


    return 0;
}
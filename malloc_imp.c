#include<stdio.h>
#include<stdlib.h>
int main()
{
    int length=0;
    float *arr=NULL;
    printf("enter the number of elements \n");
    scanf("%d",&length);
    //step1-allocate the memory
    arr=(float *)malloc(length * sizeof(float));
    if(arr == NULL)
    {
        printf("unable to allocate memory\n");

    }
    else
    {
        printf("memory gets successfully allocated\n");
        printf("total length is %d\n",length * sizeof(float));//if not working by %d then %zu for sizeof() operator
        
    }
    
    //step2-use the memory
    //logic
    //step3- free the memory
    free(arr);


    return 0;
}
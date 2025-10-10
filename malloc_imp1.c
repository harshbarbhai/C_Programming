#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int *arr=NULL;
    
    //step1-allocate the memory
    arr=(int *)malloc(10 * sizeof(int));
   
        printf("memory gets successfully allocated\n");
        printf("total length is %d\n",10 * sizeof(int));
        
        

    
    
    //step2-use the memory
    //logic
    //step3- free the memory
    free(arr);


    return 0;
}
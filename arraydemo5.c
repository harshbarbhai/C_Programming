#include<stdio.h>
int main()
{
    double arr[]={10.0,20.0,30.0,40.0};
    printf("size of arr %lu \n",sizeof(arr));
    return 0;
    arr++; //error because arr itself contain address we cannot add address

   

}
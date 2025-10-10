#include<stdio.h>
int main()
{
    int arr[4]={10,20,30,40};
    int brr[3];
    brr[2]=30;
    brr[1]=11;
    brr[0]=34;
    printf("%d\n",arr[0]); // 10
    printf("%d\n",arr[1]); //20
    
    printf("%d\n",brr[0]); //34

    printf("%d\n",brr[1]); //11
    return 0;

}
#include<stdio.h>
int main()
{
    char cvalue='S';
    int ivalue=11;
    float fvalue=90.34f;
    double dvalue=74.43223;
    
    printf("size of charactor is %lu\n",sizeof(cvalue));
    printf("size of intiger is %lu\n",sizeof(ivalue));
    printf("size of float is %lu\n",sizeof(fvalue));
    printf("size of double is %lu\n",sizeof(dvalue));

    return 0;
}
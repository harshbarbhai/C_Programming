#include<stdio.h>
int main()
{
    int ivalue=11;
    char cvalue='A';

    int *iptr=&ivalue;
    char *cptr=&cvalue;
    printf("size of ipte %lu\n",sizeof(iptr));
    printf("size of cpte %lu\n",sizeof(cptr));


    return 0;
}
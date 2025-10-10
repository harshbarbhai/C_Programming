#include<stdio.h>
int main()
{
    int no=11;
    int *const p=&no;

    printf("%d\n",*p);

    no=12;
    printf("%d\n",*p);



    




    return 0;
}
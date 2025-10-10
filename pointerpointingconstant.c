#include<stdio.h>
int main()
{
    const int no=11;
    const int *p=&no;

    printf("%d\n",*p);
    printf("%d\n",p);

    p++;
    printf("%d\n",p);

   // no++;  //error because no is constant


    return 0;
}
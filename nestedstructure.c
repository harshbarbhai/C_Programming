#include<stdio.h>
struct demo
{
    int i;
    float f;
};
struct hello
{
    int no;
    float marks;
    struct demo dobj;  //nested
};

int main()
{
    printf("size of hello structure %lu\n",sizeof(struct hello));//16
    
    



    return 0;
}
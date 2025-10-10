#include<stdio.h>
struct demo
{
    int i;
    float f;
    int j;

};
int main()
{
    struct demo obj;
    struct demo bobj;

    obj.i=11;
    obj.f=90.3f;
    obj.j=21;
    bobj.i=12;

    printf("%d\n",obj.i);
    printf("%f\n",obj.f);
    printf("%d\n",obj.j);
    printf("%d\n",bobj.i);



    return 0;
}
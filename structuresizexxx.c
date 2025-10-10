#include<stdio.h>
#pragma pack(1) // for character to allow only 1 byte
struct demo
{
    int i;
    char ch1;
    float f;
    char ch2;
    int j;

};
int main()
{
    printf("size of structure is %lu\n",sizeof(struct demo));
    



    return 0;
}
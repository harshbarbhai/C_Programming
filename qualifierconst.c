#include<stdio.h>
int main()
{
    int ino1=10;
    const int ino2=20;
    // below line generate error
    ino1++; // ino1=ino1+1;

    ino2++; // ino2=ino2+1;     error
    ino2=30;   //error


    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct hello
{
    float f;
    int i;
    int a[];
    

};
int main()
{
    

    struct hello *ptr = malloc(sizeof(struct hello) + 3 * sizeof(int));

    printf("Size of struct hello (excluding flexible array): %zu bytes\n", sizeof(struct hello));
    printf("Total allocated size (including 3 ints): %zu bytes\n", sizeof(struct hello) + 3 * sizeof(int));


     free(ptr);

    



    
    return 0;
}
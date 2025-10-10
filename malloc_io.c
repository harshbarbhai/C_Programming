#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size=0;
    int *p=NULL;
    int icnt=0;

    printf("enter number of elements\n");
    scanf("%d",&size);

    p=(int*)malloc(size * sizeof(int));

    printf("please enter elements");
    for(icnt=0;icnt<size;icnt++)
    {
        scanf("%d",&p[icnt]);
    }

    printf("entered elements are");
    for(icnt=0;icnt<size;icnt++)
    {
        printf("%d",p[icnt]);
    }
    free(p);
    return 0;
}
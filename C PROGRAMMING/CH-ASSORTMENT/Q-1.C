#include<stdio.h>
main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter Array Elements:\n");
    for(int i=0;i<size;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Negative element in an Array:\t");
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
}
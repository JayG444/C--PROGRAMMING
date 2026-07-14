#include<stdio.h>

main()
{
    int size;
    int *ptr;
    printf("Enter size of Array :");
    scanf("%d",&size);
    ptr = &size;
    int arr[size];
    int i;
    for (i = 0; i < *ptr ;i++)
    {
        printf("a[%d]:", i);
        scanf("%d",&arr[i]);

    }

    for (i = 0; i < *ptr;i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d\t", arr[i]);
        }
    }
}
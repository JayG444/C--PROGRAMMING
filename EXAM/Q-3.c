#include<stdio.h>

main()
{
    int size;
    printf("Enter size of Array :");
    scanf("%d",&size);

    int arr[size];
    int i;
    for (i = 0; i < size;i++)
    {
        printf("a[%d]:", i);
        scanf("%d",&arr[i]);

    }

    for (i = 0; i < size;i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d\t", arr[i]);
        }
    }
}
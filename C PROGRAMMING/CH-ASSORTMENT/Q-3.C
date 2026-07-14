#include<stdio.h>
main()
{
    int size;
    printf("Enter array's row and column size: ");
    scanf("%d",&size);
    int a[size][size];
    printf("Enter Array Elements:\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i!=j)
            {
               printf("%d\t",a[j][i]);
            }
            else
            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
    }
}
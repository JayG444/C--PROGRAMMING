#include<stdio.h>
main()
{
    int size,sum;
    printf("Enter size of array :");
    scanf("%d",&size);

    int a[size][size];
    sum=0;
    printf("Enter array elements :\n");
    for(int i=0;i<size;i++)
     for(int j=0;j<size;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    for(int i=0;i<size;i++)
    {
    for(int j=0;j<size;j++)
        {
            if(i==0||i==size-1||j==0||j==size-1)
            {
                printf("%d\t", a[i][j]);
                sum=sum+a[i][j];
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    printf("\nSum of Boundary elements of an Array :%d", sum);
}
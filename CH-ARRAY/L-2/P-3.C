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
            if(i+j==size-1)
            {
                sum=sum+a[i][j];
            }
        }
            printf("Sum of Anti-Diagonal elements:%d", sum);
}
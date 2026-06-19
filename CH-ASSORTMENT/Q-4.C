#include<stdio.h>
main()
{
    int row,col;
    printf("Enter array's row size: ");
    scanf("%d",&row);
    printf("Enter array's column size: ");
    scanf("%d",&col);
    int a[row][col];
    printf("Enter Array Elements:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Row Number: ");
    scanf("%d",&row);
    printf("Elements of Row %d:",row);
    for(int i=0;i<col;i++)
    {
        printf("%d ",a[row][i]);
    }
    printf("\n");
    printf("Sum of Row:");
    int sum=0;
    for(int i=0;i<col;i++)
    {
        sum=sum+a[row][i];
    }
    printf("%d",sum);

    printf("\nEnter Column Number: ");
    scanf("%d",&col);
    printf("Elements of Column %d:",col);
    for(int i=0;i<row;i++)
    {
        printf("%d ",a[i][col]);
    }
    printf("\nSum of Column:");
    for(int i=0;i<row;i++)
    {
        sum=sum+a[i][col];
    }
    printf("%d",sum);
}
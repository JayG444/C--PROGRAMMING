#include<stdio.h>
main()
{
    int rowsize,colsize,row,col;
    int sum=0;
    printf("Enter array's row size: ");
    scanf("%d",&rowsize);
    printf("Enter array's column size: ");
    scanf("%d",&colsize);
    int a[rowsize][colsize];
    printf("Enter Array Elements:\n");
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<colsize;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Row Number: ");
    scanf("%d",&row);
    printf("Elements of Row :");
    for(int i=0;i<colsize;i++)
    {
        printf("%d\t",a[row][i]);
    }
    printf("\n");
    printf("Sum of Row:");
    for(int i=0;i<colsize;i++)
    {
        sum=sum+a[row][i];
    }
    printf("%d",sum);

    printf("\nEnter Column Number: ");
    scanf("%d",&col);
    printf("Elements of Column:");
    for(int i=0;i<rowsize;i++)
    {
        printf("%d\t",a[i][col]);
    }
    printf("\n");
    sum=0;
    printf("Sum of Column:");
    for(int i=0;i<rowsize;i++)
    {
        sum=sum+a[i][col];
    }
    printf("%d",sum);

}
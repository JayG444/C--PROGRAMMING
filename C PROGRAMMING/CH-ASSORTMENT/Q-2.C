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
    int large=a[0][0];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]>large)
            {
                large=a[i][j];
            }
        }
    }
    printf("Largest element in the array:%d", large);
}
#include<stdio.h>

int main()
{
    int rowsize, colsize;

    printf("Enter Rows :");
    scanf("%d",&rowsize);
    printf("Enter Column :");
    scanf("%d",&colsize);

    int arr[rowsize][colsize];
    int sum = 0;
    for (int i = 0; i < rowsize;i++)
    {
        for (int j = 0; j < colsize;j++)
        {
            printf("arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }
    int size = (rowsize * colsize);
    printf("Average :%d", sum/size);
}
#include<stdio.h>
main()
{
    int size,sum,x;
    printf("Enter array size :");
    scanf("%d",&size);

    int a[size];
    printf("Enter array elements :\n");
    for(int i=0;i<size;i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the Sum : ");
    scanf("%d",&sum);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            x=a[i]+a[j];
            if(x==sum)
            {
                printf("%d and %d are the index Numbers.\n",i,j);
            }
        }
    }
}
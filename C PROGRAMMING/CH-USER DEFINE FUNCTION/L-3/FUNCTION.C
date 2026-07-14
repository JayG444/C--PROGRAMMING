int input()
{
    int n;
    scanf("%d", &n);
    return n;
}
void ArrayOutput(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
void ArrayInput(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] :", i);
        a[i] = input();
    }
    ArrayOutput(size, a);
}
int SumofArrayElements(int size, int a[])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}
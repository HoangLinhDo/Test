int steps = 0;


void f(int a[], int n)
{
    steps = 0;
    int even = 0;
    int odd = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            steps++;


            int temp = a[even];
            a[even] = a[i];
            a[i] = temp;
            even += 2;

            steps += 3;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            steps++;


            int temp = a[odd];
            a[odd] = a[i];
            a[i] = temp;
            odd += 2;

            steps += 3;
        }
    }
}


int main()
{
    int n = 10;
    int a[10] = {2, 5, 3, 7, 4, 1, 6, 9, 8, 6};
    f(a, n);
    printf("Tổng số bước: %d\n", steps);
    return 0;
}
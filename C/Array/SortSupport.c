void swap(int *i, int *j)
{
    int t = *i;
    *i = *j;
    *j = t;
}

void display(int *array)
{
    for(int i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
}
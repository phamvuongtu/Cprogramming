double *maximum(double *a, int n)
{
    double max = *a;
    int index = 0;
    if (a == NULL)
        return NULL;
    for (int i = 0; i < n; i++)
    {
        if (max < *(a + i))
        {
            max = *(a + i);
            index = i;
        }
    }
    return a + index;
}

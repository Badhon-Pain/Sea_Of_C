#include <stdio.h>
#include <stdlib.h>
// Problem : Write a programme to demonstrate the usage of free with malloc
int main()
{
    int n;
    scanf("%d", &n);
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.1f ", ptr[i]);
    }
    free(ptr);
    return 0;
}
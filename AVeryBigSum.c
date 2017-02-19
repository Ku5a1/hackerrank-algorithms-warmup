#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n;
    long tot = 0;
    scanf("%d", &n);
    if (n <= 10 && n >= 1)
    {
        int arr[n];
        for (int arr_i = 0; arr_i < n; arr_i++)
        {
            scanf("%d", &arr[arr_i]);
            if (arr[arr_i] <= pow(10, 10) && arr[arr_i] >= 0)
                tot += arr[arr_i];
        }
        printf("%ld", tot);
        return 0;
    }
    else
        printf("n Constraint Violated\n");
}

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
    int tot = 0;
    scanf("%d", &n);
    int arr[n];
    for (int arr_i = 0; arr_i < n; arr_i++)
    {
        scanf("%d", &arr[arr_i]);
        tot += arr[arr_i];
    }
    printf("%d", tot);
    return 0;
}

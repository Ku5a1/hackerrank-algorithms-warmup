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
    int oDgn = 0;
    int tDgn = 0;
    scanf("%d", &n);
    int a[n][n];
    for (int a_i = 0; a_i < n; a_i++)
    {
        for (int a_j = 0; a_j < n; a_j++)
        {
            scanf("%d", &a[a_i][a_j]);
        }
        oDgn += a[a_i][a_i];
        tDgn += a[a_i][(n - 1) - a_i];
    }
    if (oDgn > tDgn)
        printf("%d\n", (oDgn - tDgn));
    else
        printf("%d\n", (tDgn - oDgn));
    return 0;
}

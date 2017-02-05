#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > 0; j--) {
            if (j <= i)
            printf("#");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

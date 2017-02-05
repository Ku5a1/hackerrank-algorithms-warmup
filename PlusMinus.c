#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    double pCnt = 0;
    double nCnt = 0;
    double zCnt = 0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
        scanf("%d",&arr[arr_i]);
        if (arr[arr_i] > 0) {
            ++pCnt;
        }
        else if (arr[arr_i] < 0) {
            ++nCnt;
        }
        else if (arr[arr_i] == 0) {
            ++zCnt;
        }
    }
    printf("%f\n", (pCnt / n));
    printf("%f\n", (nCnt / n));
    printf("%f\n", (zCnt / n));
    return 0;
}

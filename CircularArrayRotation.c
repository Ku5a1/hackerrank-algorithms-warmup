#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long n;
    long k;
    long q;
    scanf("%ld %ld %ld", &n, &k, &q);

    if (k > n) {
        k %= n;
    }
    long strt = n - k;
    long cntn = 0;
    if (n >= 1 && n <= pow(10, 5) && k >= 1 && k <= pow(10, 5) && q >= 1 && q <= 500) {
        long *a = (long *) malloc(sizeof(long) * n);
        long *done = (long *) malloc(sizeof(long) * n);
        for(long i = 0; i < n; i++){
            scanf("%ld", &a[i]);
        }

        for (long j = 0; j < n; j++) {
            if (a[j] >= 1 && a[j] <= pow(10, 5)) {
                if (strt == n) {
                    done[j] = a[cntn];
                    cntn++;
                    continue;
                }
                done[j] = a[strt];
                strt++;
            }

            else {
                printf("a[i] Constraint Violated :(\n");
                break;
            }
        }

        for(long k = 0; k < q; k++){
            long m;
            scanf("%ld", &m);
            printf("%ld\n", done[m]);
        }

        free(a);
        free(done);
    }

    else
    printf("Constraints Violated :(\n");

    return 0;
}

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0;
    int a1;
    int a2;
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0;
    int b1;
    int b2;
    scanf("%d %d %d",&b0,&b1,&b2);
    if (a0 <= 100 && a0 >= 1 && a1 <= 100 && a1 >= 1 && a2 <= 100 && a2 >= 1 && b0 <= 100 && b0 >= 1 && b1 <= 100 && b1 >= 1 && b2 <= 100 && b2 >= 1) {
        int aPnt = 0;
        int bPnt = 0;
        if (a0 > b0) {
            ++aPnt;
        }
        if (a0 < b0){
            ++bPnt;
        }
        if (a1 > b1) {
            ++aPnt;
        }
        if (a1 < b1){
            ++bPnt;
        }
        if (a2 > b2) {
            ++aPnt;
        }
        if (a2 < b2){
            ++bPnt;
        }
        printf("%d %d", aPnt, bPnt);
        return 0;
    }
    else
        printf("Constraints Violated :(\n");
}

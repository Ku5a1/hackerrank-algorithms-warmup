#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    char *time = (char *)malloc(10240 * sizeof(char));
    scanf("%s", time);
    char *hh = strtok(time, ":");
    int h = atoi(hh);
    if (h <= 12 && h >= 1)
    {
        char *mm = strtok(NULL, "");
        if (strcmp(&mm[strlen(mm) - 2], "PM") == 0)
        {
            mm[strlen(mm) - 2] = 0;
            if (h == 12)
            {
                printf("%d:%s\n", h, mm);
                return 0;
            }
            printf("%d:%s\n", h + 12, mm);
        }

        else
        {
            mm[strlen(mm) - 2] = 0;
            if (h == 12)
            {
                printf("0%d:%s\n", 0, mm);
                return 0;
            }
            printf("0%d:%s\n", h, mm);
        }
        return 0;
    }
    else
        printf("h Constraint Violated\n");
}

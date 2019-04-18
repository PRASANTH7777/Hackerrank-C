#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define min(a, b) ((a) < (b) ? (a) : (b))

int main() 
{
    int n;
    scanf("%d", &n);
    int len = n * 2 - 1;
    for(int row1 = 0; row1 < len; row1++)
    {
        for(int row2= 0; row2< len; row2++)
        {
            int m = min(row1, row2);
            m = min(m, len - row1 - 1);
            m = min(m, len - row2 - 1);
            printf("%d ", n - m);
        }
        printf("\n");
    }
    return 0;
}
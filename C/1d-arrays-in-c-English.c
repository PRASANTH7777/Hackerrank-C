#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int i,sum=0,n,b[1000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d\t",&b[i]);
         }
    for(i=0;i<n;i++){
        sum=sum+b[i];
    }
    printf("%d",sum);
    
    return 0;
}
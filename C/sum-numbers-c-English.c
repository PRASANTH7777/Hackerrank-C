#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ int a,b,c,d;
 float g,h,e,f;
 scanf("%d\t%d\n",&a,&b);
  scanf("%f\t%f\n",&e,&f);
 c=a+b;
 d=a-b;
 g=e+f;
 h=e-f;
 printf("%d %d\n",c,d);
 printf("%.1f %.1f",g,h);

 return 0;
}
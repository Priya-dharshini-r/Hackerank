#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int m,n;
    float a,b;
    scanf("%d %d\n%f %f",&m,&n,&a,&b);
    printf("%d %d\n",m+n,m-n);
    printf("%.1f %.1f",a+b,a-b);

    
    return 0;
}

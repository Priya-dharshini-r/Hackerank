#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int base,exponent,result;
    int n;
    scanf("%d",&base);
    scanf("%d",&exponent);
    result=pow(base,exponent);
    printf("%d^%d=%d",base,exponent,result);
    for(result=0;n>0;result+=n%10,n/=10);
    return result;
    return 0;
}

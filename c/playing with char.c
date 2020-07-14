#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    char s1[100];
    char s2[100];
    scanf("%c\n%s\n%[^\n]s",&ch,&s1,&s2);
    printf("%c\n%s\n%s",ch,s1,s2);
    return 0;
}

#include <stdio.h>
 
#define STRSIZE 10
 
int main()
{
    char str[STRSIZE];
 
    gets( str );
    printf( "%s\n", str );
 
    return 0;
}

/*write a program to use '&' and sizeof operator
and determine the size of integer and float variables*/
#include <stdio.h>
void main()
{
    int x = 5;
    float y = 15;
    printf("Sizeof(x);%d", sizeof(x));
    printf("\nSizeof(y):%d", sizeof(y));
    printf("\nAddress of x=%d and Address of y=%d", &x, &y);
    return;
}
/*write a program to demonstrate wrapping around*/
#include <stdio.h>
void main()
{
    int a = 1, b = 2, c = 3, j;
    j = a + b * c;
    printf("\nj=%d", j);
    j = (a + b) * c;
    printf("\nj=%d", j);
    return;
}
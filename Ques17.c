/*write a program to show the effect of increment operator as a suffix.*/
#include <stdio.h>
void main()
{
    int a, z, x = 10, y = 20;
    z = x * y++;
    a = x * y;
    printf("\n%d %d", z, a);
    return;
}
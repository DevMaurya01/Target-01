/*Write a program to swap to number using a third variable*/
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping");
    printf("\na=%d and b=%d", a, b);
    return;
}
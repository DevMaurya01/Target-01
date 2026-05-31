/*Write a program to swap two number with out using a third variable*/
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the valus of a and b:");
    scanf("%d%d", &a, &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping a number");
    printf("\na=%d and b=%d", a, b);
    return;
}
/*include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the valus of a and b:");
    scanf("%d%d", &a, &b);
    c = a + b;
    a = a - b;
    b = a - b;
    printf("After swapping:");
    printf("\na=%d and b=%d", a, b);
    return;
}*/

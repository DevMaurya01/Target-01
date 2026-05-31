/*Write a program to demonstrate dynamic initialization*/
#include <stdio.h>
void main()
{
    int no1, no2, sum;
    printf("Enter two number:");
    scanf("%d%d", &no1, &no2);
    sum = no1 + no2;
    printf("Sum of %d and %d are %d", no1, no2, sum);
    return;
}
#include <stdio.h>
#include <limits.h>
#include <conio.h>

int main()
{
    int A = 60; //0011 1100
    int B = 13; //0000 1101
    int c = 0;
    c = A & B; // the value in binary is ---->>  0000 1100
    printf("\n\n value of c is : %d\n", c);
    c = A | B; // the value in binary is ---->>  0011 1101
    printf("value of c is : %d\n", c);
    c = A ^ B; // the value in binary is ---->>  0011 0001
    printf("value of c is : %d\n", c);
    c = A << 2; // the value in binary is ---->>  1111 0000
    printf("value of c is : %d\n", c);
    c = A >> 2; // the value in binary is ---->>  0000 1111
    printf("value of c is : %d\n", c);
    return 0;
}

#include <stdio.h>

void swap(int a, int b)
{
    int temp;
    printf("\nBefore Swapping: %d , %d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nSwapping Number: %d , %d", a, b);
    return;
}
int main()
{
    int a, b;
    printf("\nEnter Number: ");
    scanf("%d%d", &a, &b);
    swap(a, b);
    return 0;
}

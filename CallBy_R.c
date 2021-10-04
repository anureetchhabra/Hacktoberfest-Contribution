#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d%d", &a, &b);
    printf("\nBefore Swap: %d , %d", a, b);
    swap(&a, &b);
    printf("\nAfter Swap: %d , %d", a, b);
    return 0;
}

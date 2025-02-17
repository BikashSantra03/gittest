#include <stdio.h>

int add()
{
    int a = 5;
    int b = 10;
    return a + b;
}
int main()
{
    int sum = add();
    printf("The sum is: %d\n", sum);
    return 0;
}
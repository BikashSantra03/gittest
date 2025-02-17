#include <stdio.h>

int add()
{
    int a = 5;
    int b = 10;
    return (a + b);

    int sub()
    {
        int a = 5;
        int b = 10;
        return (a - b);
    }

    int main()
    {
        int add = add();
        printf("The addision is: %d\n", add);

        int c=10;

        int sub = sub();
        printf("The substraction is: %d\n", sub);
        return 0;
    }
}
// calculator through functions
#include <stdio.h>
int addition(int a, int b)
{
    printf("Addition of %d and %d is:%d\n", a, b, a + b);
}
int subtraction(int a, int b)
{
    printf("Addition of %d and %d is:%d\n", a, b, a - b);
}
int product(int a, int b)
{
    printf("Addition of %d and %d is:%d\n", a, b, a * b);
}
float division(int a, int b)
{
    printf("Addition of %d and %d is:%.2f\n", a, b, (float)a / b);
}
int modulas(int a, int b)
{
    printf("Addition of %d and %d is:%d\n", a, b, a % b);
}

int enter(int *a, int *b)
{
    printf("Enter the first number:");
    scanf("%d", a);
    printf("Enter the second number:");
    scanf("%d", b);
}

int main()
{
    int a, b, choose;

    printf("Press 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 for %%\nPress 6 for exit\nEnter your choice:");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:
        enter(&a, &b);
        addition(a, b);
        break;

    case 2:
        enter(&a, &b);
        subtraction(a, b);
        break;

    case 3:
        enter(&a, &b);
        product(a, b);
        break;

    case 4:
        enter(&a, &b);
        division(a, b);
        break;

    case 5:
        enter(&a, &b);
        modulas(a, b);
        break;

    case 6:
        printf("Exiting the calculator.\n");
        break;

    default:
        printf("Please enter the right choice.");
        break;
    }

    return 0;
}
#include <stdio.h>

int a = 42;
int b = 43;
int c = 44;

int main()
{
    int i;

    printf("Hello World\n");
    printf("Enter a number:\n");

    scanf("%d", &i);
    printf("The number was: ");
    printf("%d\n", i);
}
#include <stdio.h>


//Fibonacci Progression: 0, 1, 1, 2, 3, 5, 8, ...
int Fibo(int n) // n means index of term
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else // n >= 3
        return Fibo(n - 2) + Fibo(n - 1);

}

int main(void)
{
    int i;
    int num;
    printf("Enter the number you want to see in a Fibonacci progression: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
        printf("%d ", Fibo(i));
    printf("\n");
    return 0;

}
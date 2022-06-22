//Fibonacci Calculator with recursion
#include <stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
  
int main()
{
    int n = 40;
    printf("The fibonacci number for n = %d is", n);
    printf("\n%d\n", fib(n));
    return 0;
}
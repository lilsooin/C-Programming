#include <stdio.h>

int multiply(const int a, const int b);

int main(void)
{
    int result = multiply(1, 3);			
	return result;
}

int multiply(const int a, const int b)
{
	return a * b;
}

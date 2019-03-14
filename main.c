#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int main()
{
	int a, c, function;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	int (*funcptr[4])(int, int)={plus, minus, multiply, divided};
	if (b == '+')
		function=0;
	else if (b == '-')
		function=1;
	else if (b == '*')
		function=2;
	else if (b == '/')
		function=3;
	printf("%d %c %d = %d\n", a, b, c,funcptr[function](a,c));
}

#include <iostream>

int main(int argc, char* argv[])
{
	int s = 0;
	int a = 0;
	int b = 0;
	int c = 0;

	scanf_s("%d", &s);
	a = s / 6;
	c = a;
	b = 2 * a + 2 * c;
	printf("%d %d %d", a, b, c);

	return EXIT_SUCCESS;
}
#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int res = 0;

	scanf_s("%d", &a);
	res = (a % 100) % 10 + (a / 10) % 10 + (a / 100);
	printf("%d", res);

	return EXIT_SUCCESS;
}
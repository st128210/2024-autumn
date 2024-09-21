#include <iostream>

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	int step = 0;
	int res = 0;

	scanf_s("%d", &v);
	scanf_s("%d", &t);
	step = (v * t) % 109;
	res = (step + 109) % 109 + 1;
	printf("%d", res);

	return EXIT_SUCCESS;
}
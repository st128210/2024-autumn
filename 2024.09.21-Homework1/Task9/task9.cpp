#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int h = 0;
	
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &h);
	printf("%d", (h - a)/(a - b) + 1);

	return EXIT_SUCCESS;
}
#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	int h = 0;
	int h_bus = 437;

	scanf_s("%d", &n);

	int i = 0;
	for (n; n > 0; --n)
	{
		++i;
		scanf_s("%d\n", &h);
		if (h <= h_bus)
		{
			printf("Crash %d", i);
			return 0;
		}

	}
	printf("No crash");

	return 0;
}
#include <cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	int rub_3 = 0;

	scanf_s("%d", &n);

	int mod = n % 5;
	switch (mod)
	{
	case 0:
	{
		printf("%d %d", n / 5, rub_3);
		break;
	}
	case 1:
	{
		printf("%d %d", (n / 5) - 1, (n - 5 * ((n / 5) - 1)) / 3);
		break;
	}
	case 2:
	{
		printf("%d %d", (n / 5) - 2, (n - 5 * ((n / 5) - 2)) / 3);
		break;
	}
	case 3:
	{
		printf("%d %d", n / 5, (n - 5 * (n / 5)) / 3);
		break;
	}
	case 4:
	{
		printf("%d %d", (n / 5) - 1, (n - 5 * ((n / 5) - 1)) / 3);
		break;
	}
	}
	return 0;
}
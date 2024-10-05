#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a > b)
	{
		for (int i = b - 1; true; --i)
		{
			c = a * (b - i);
			if (c % a == 0 && c % b == 0)
			{
				printf("%d", c);
				return 0;
			}
		}
	}
	else
	{
		for (int i = a - 1; true; --i)
		{
			c = b * (a - i);
			if (c % a == 0 && c % b == 0)
			{
				printf("%d", c);
				return 0;
			}
		}
	}

	return 0;
}
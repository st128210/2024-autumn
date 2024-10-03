#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long b = 0;
	long long c = 0;

	scanf_s("%lld", &a);
	scanf_s("%lld", &b);
	scanf_s("%lld", &c);

	double x0 = 0;
	double x1 = 0;
	double x2 = 0;
	int n = 0;
	double d = sqrt((b * b) - (4 * a * c));

	if (a == 0)
	{
		if (b == 0)
		{

			if (c == 0)
			{
				n = -1;
				printf("%d", n);
			}
			else
			{
				n = 0;
				printf("%d", n);
			}
		}
		else
		{
			n = 1;
			x0 = c * (-1) / (double)b;
			printf("%d\n", n);
			printf("%f", x0);
		}
	}
	else if (d > 0)
	{
		n = 2;
		x1 = (b * (-1) - d) / 2 * (double)a;
		x2 = (b * (-1) + d) / 2 * (double)a;
		printf("%d\n", n);
		printf("%f\n", x1);
		printf("%f", x2);
	}
	else if (d == 0)
	{
		n = 1;
		x0 = b * (-1) / 2 * (double)a;
		printf("%d\n", n);
		printf("%f", x0);
	}
	else if (d < 0)
	{
		n = 0;
		printf("%d", n);
	}

	return 0;
}
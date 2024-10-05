#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	long long n = 0;
	long long m = 0;

	scanf_s("%lld", &n);
	scanf_s("%lld", &m);

	long long n_1 = n;
	if (m % n == 0)
	{
		printf("1");
	}
	else if (m % n != 0)
	{
		while (m != 0 && n != 0)
		{
			if (m > n)
			{
				m %= n;
			}
			else
			{
				n %= m;
			}
		}
		long long z = n + m;
		printf("%lld", n_1 / z);
	}

	return 0;
}
#include <cstdio>
#define N 1000

int main(int argc, char* argv[])
{
	int z[N] = { 0 };
	int n = 0;

	scanf_s("%d", &n);

	for (int i = 1; i <= n; ++i)
	{
		z[i] = { i };
	}

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int k = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);

	for (int i = a; i <= (b + a) / 2; ++i)
	{
		k = z[i];
		z[i] = z[b + a - i];
		z[b + a - i] = k;
	}

	for (int i = c; i <= (d + c) / 2; ++i)
	{
		k = z[i];
		z[i] = z[d + c - i];
		z[d + c - i] = k;
	}

	for (int i = 1; i <= n; ++i)
	{
		printf("%d ", z[i]);
	}

	return 0;
}
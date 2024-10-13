#include <cstdio>

int main(int argc, char* argv[])
{
	int a[1001] = { 0 };
	int n = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	int step = 0;
	int i_max = 0;
	for (int i = 1; i < n - 1; ++i)
	{
		step = a[i - 1] + a[i] + a[i + 1];
		if (step >= i_max)
		{
			i_max = step;
		}
		
	}
	if (a[n - 2] + a[n - 1] + a[0] > i_max)
	{
		i_max = a[n - 2] + a[n - 1] + a[0];
	}
	else if (a[n - 1] + a[0] + a[1] > i_max)
	{
		i_max = a[n - 1] + a[0] + a[1];
	}

	printf("%d", i_max);

	return 0;
}
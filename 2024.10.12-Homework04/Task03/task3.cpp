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

	int i_max = -1000;
	int i_min = 1000;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] > i_max)
		{
			i_max = a[i];
		}
		if (a[i] < i_min)
		{
			i_min = a[i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == i_max)
		{
			printf("%d ", i_min);
		}
		else
		{
			printf("%d ", a[i]);
		}
	}
	
	return 0;
}
#include <cstdio>

int main(int argc, char* argv[])
{
	int a[1001] = { 0 };
    int p[1001] = { 0 };
	int n = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &p[i]);
	}
	
	int p_max = 0;
	int res = 0;
	for (int i = 0; i <= n; ++i)
	{
		if (a[i] * p[i] > p_max)
		{
			p_max = (a[i] * p[i]);
			res = i;
		}
		else
		{
			continue;
		}
	}
	printf("%d", res + 1);
	
	return 0;
}
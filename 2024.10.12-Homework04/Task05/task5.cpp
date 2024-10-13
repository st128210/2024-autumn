#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	int a[1001] = { 0 };
	int n = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	int x = 0;

	scanf_s("%d", &x);
	
	int res = a[0];
	int step1 = abs(res - x);
	for (int i = 1; i < n; ++i)
	{
		int step2 = abs(a[i] - x);
		if (step2 < step1 || (step2 == step1 && a[i] < res))
		{
			res = a[i];
			step1 = step2;
		}
	}
	printf("%d", res);

	return 0;
}
#include <cstdio>

int main(int argc, char* argv[])
{
	int a[1001] = { 0 };
	int n = 0;

	scanf_s("%d", &n);

	for (int i = 1; i <= n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	int l = 0;
	int r = 0;

	scanf_s("%d", &l);
	scanf_s("%d", &r);

	int k = l;

	for (int i = l + 1; i <= r; ++i)
	{
		if (a[i] > a[k])
		{
			k = i;
		}
	}

	printf("%d %d", a[k], k);

	return 0;
}
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

	int m = 0;

	scanf_s("%d", &m);

	int i = 0;
	int j = 0;
	for (int z = 0; z < m; ++z)
	{
		scanf_s("%d", &i);
		scanf_s("%d", &j);
		for (int x = i - 1; x < j; ++x)
		{
			printf("%d ", a[x]);
		}
		printf("\n");
	}

	return 0;
}
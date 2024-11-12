#include <cstdio>

int main(int argc, char* argv[])
{
	unsigned int a[1001] = { 0 };
	int n = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	unsigned int x = 0;

	scanf_s("%d", &x);

	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] >= x)
		{
			++k;
		}
		else
		{
			break;
		}
	}
	++k;
	printf("%d", k);

	return 0;
}
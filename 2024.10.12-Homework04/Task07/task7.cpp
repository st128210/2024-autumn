#include <cstdio>
#define N 1000

int main(int argc, char* argv[])
{
	int a[N] = { 0 };
	int n = 0;
	
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = n - 1; i >= 0; --i)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
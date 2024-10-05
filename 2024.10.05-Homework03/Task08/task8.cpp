#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	int i = 0;
	int j = 0;
	int num = 1000000000;

	scanf_s("%d", &i);
	scanf_s("%d", &j);

	while (i != 0 && j != 0)
	{
		if (i > j)
		{
			i %= j;
		}
		else
		{
			j %= i;
		}

	}
	int z = i + j;
	int f0 = 0;
	int f1 = 1;
	for (int x = z; x > 0; --x)
	{
		int f = (f1 + f0) % num;
		f0 = f1;
		f1 = f;
	}
	printf("%d", f0);

	return 0;
}
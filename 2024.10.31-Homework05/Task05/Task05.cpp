#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int* a = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", a + i);
	}

	int sum = 0;
	int k = 1;
	int z = 0;
	int x = 0;
	int i_max = -1;
	int i_old = 0;
	while (x != n - 1)
	{
		for (int i = x; i < n; ++i)
		{
			int s = 0;
			s += *(a + i);
			if (s > i_max && s != i_old)
			{
				i_max = s;
				z = i;
				++k;
			}
		}
		if (k == n + 1)
		{
			sum = i_max * n;
			break;
		}
		else if (z == 0)
		{
			for (int i = 0; i < n; ++i)
			{
				int s = 0;
				s += *(a + i);
				sum += s;
			}
			std::cout << sum;
			return 0;
		}
		sum += i_max * k;
		x = z;
		i_old = i_max;
		i_max = 0;
		k = 0;
	}

	std::cout << sum;

	free(a);

	return 0;
}
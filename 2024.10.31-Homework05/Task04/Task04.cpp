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

	for (int i = 0; i < n; ++i)
	{
		int s = 0;
		s += *(a + i);
		if (s < 0)
		{
			continue;
		}
		else
		{
			sum += s;
		}
	}

	int i_min = 101;
	int i_max = -101;
	int z = 0;
	int x = 0;

	for (int i = 0; i < n; ++i)
	{
		int s = 0;
		s += *(a + i);
		if (i_min > s)
		{
			i_min = s;
			z = i;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		int s = 0;
		s += *(a + i);
		if (i_max < s)
		{
			i_max = s;
			x = i;
		}
	}

	int comp = 1;
	if (z < x)
	{
		for (int i = z + 1; i < x; ++i)
		{
			int s = 0;
			s += *(a + i);
			comp = comp * s;
		}
	}
	else
	{
		for (int i = x + 1; i < z; ++i)
		{
			int s = 0;
			s += *(a + i);
			comp = comp * s;
		}
	}

	std::cout << sum << " " << comp;

	free(a);

	return 0;
}
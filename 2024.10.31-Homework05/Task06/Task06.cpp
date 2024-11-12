#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	std::cin >> n;
	std::cin >> m;

	int* a = (int*)malloc(n * sizeof(int));
	int* b = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", a + i);
	}

	for (int i = 0; i < m; ++i)
	{
		scanf_s("%d", b + i);
	}

	int old = 0;
	if (n > m)
	{
		for (int i = 0; i < n; ++i)
		{
			int z = 0;
			z += *(a + i);
			for (int i = 0; i < m; ++i)
			{
				int s = 0;
				s += *(b + i);
				if (z == s )
				{
					std::cout << z << " ";
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < m; ++i)
		{
			int z = 0;
			z += *(a + i);
			for (int i = 0; i < n; ++i)
			{
				int s = 0;
				s += *(b + i);
				if (z == s && old != z)
				{
					old = z;
					std::cout << z << " ";
				}
			}
		}
	}

	free(a);
	free(b);

	return 0;
}
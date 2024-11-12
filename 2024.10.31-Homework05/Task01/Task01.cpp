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

	int i_min = 100001;
	int z = 0;
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

	for (int i = z; i < n; ++i)
	{
		int s = 0;
		s += *(a + i);
		std::cout << s << std::endl;
	}

	for (int i = 0; i < z; ++i)
	{
		int s = 0;
		s += *(a + i);
		std::cout << s << std::endl;
	}

	free(a);

	return 0;
}
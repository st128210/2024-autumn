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

	int z = 0;
	for (int i = 0; i < n; ++i)
	{
		int s = 0;
		s += *(a + i);
		if (s % 2 == 0)
		{
			continue;
		}
		else
		{
			std::cout << s << " ";
			++z;
		}
	}
	std::cout << std::endl;

	int x = 0;
	for (int i = 0; i < n; ++i)
	{
		int s = 0;
		s += *(a + i);
		if (s % 2 == 0)
		{
			std::cout << s << " ";
			++x;
		}
		else
		{
			continue;
		}
	}

	std::cout << std::endl;

	if (z > x)
	{
		std::cout << "NO";
	}
	else
	{
		std::cout << "YES";
	}

	free(a);

	return 0;
}
#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int* a = (int*)malloc(n * sizeof(int));

	for (int i = 1; i <= n; ++i)
	{
		scanf_s("%d", a + i);
	}

	int k = 0;

	std::cin >> k;

	int i_start = 0;
	if (k > 0)
	{
		for (int i = 1; i <= n; ++i)
		{
			if (i + k > n)
			{
				i_start = i;
				break;
			}
		}
	}
	else if (k < 0)
	{
		for (int i = n; i > 0; --i)
		{
			if (i + k == 1)
			{
				i_start = i;
				break;
			}
		}
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			int s = 0;
			s += *(a + i);
			std::cout << s << " ";
		}
	}

	for (int i = i_start; i <= n; ++i)
	{
		int s = 0;
		s += *(a + i);
		std::cout << s << " ";
	}

	for (int i = 1; i < i_start; ++i)
	{
		int s = 0;
		s = *(a + i);
		std::cout << s << " ";
	}

	free(a);

	return 0;
}
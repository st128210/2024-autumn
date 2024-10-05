#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	int resh = 0;
	int orel = 0;
	int step = 0;

	scanf_s("%d", &n);

	for (n; n > 0; --n)
	{
		scanf_s("%d", &step);
		if (step == 1)
		{
			++resh;
		}
		else if (step == 0)
		{
			++orel;
		}
		else
		{
			printf("Error");
		}
	}
	if (resh > orel) 
	{
		printf("%d", orel);
	}
	else if (orel > resh)
	{
		printf("%d", resh);
	}
	else
	{
		printf("%d", n / 2);
	}

	return 0;
}
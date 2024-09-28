#include <cstdio>

int main(int argc, char* argv[])
{
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;

	scanf_s("%d", &a1);
	scanf_s("%d", &b1);
	scanf_s("%d", &c1);

	int a2 = 0;
	int b2 = 0;
	int c2 = 0;

	scanf_s("%d", &a2);
	scanf_s("%d", &b2);
	scanf_s("%d", &c2);

	if (a1 < b1)
	{
		int z = a1;
		a1 = b1;
		b1 = z;
	}
	if (b1 < c1)
	{
		int z = b1;
		b1 = c1;
		c1 = z;
	}
	if (a1 < b1)
	{
		int z = a1;
		a1 = b1;
		b1 = z;
	}
	if (a2 < b2)
	{
		int z = a2;
		a2 = b2;
		b2 = z;
	}
	if (b2 < c2)
	{
		int z = b2;
		b2 = c2;
		c2 = z;
	}
	if (a2 < b2)
	{
		int z = a2;
		a2 = b2;
		b2 = z;
	}

	if (a1 == a2 && b1 == b2 && c1 == c2)
	{
		printf("Boxes are equal");
	}
	else if (a1 >= a2 && b1 >= b2 && c1 >= c2)
	{
		printf("The first box is larger than the second one");
	}
	else if (a1 <= a2 && b1 <= b2 && c1 <= c2)
	{
		printf("The first box is smaller than the second one");
	}
	else
	{
		printf("Boxes are incomparable");
	}

	return 0;
}


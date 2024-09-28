#include <cstdio>

int main(int argc, char* argv[])
{
	int l1 = 0;
	int w1 = 0;
	int h1 = 0;
	int l2 = 0;
	int w2 = 0;
	int h2 = 0;

	scanf_s("%d", &l1);
	scanf_s("%d", &w1);
	scanf_s("%d", &h1);
	scanf_s("%d", &l2);
	scanf_s("%d", &w2);
	scanf_s("%d", &h2);

	int l_c = 0;
	int w_c = 0;
	int h_c = 0;

	scanf_s("%d", &l_c);
	scanf_s("%d", &w_c);
	scanf_s("%d", &h_c);

	if (l1 < w1)
	{
		int z = l1;
		l1 = w1;
		w1 = z;
	}
	if (w1 < h1)
	{
		int z = w1;
		w1 = h1;
		h1 = z;
	}
	if (l1 < w1)
	{
		int z = l1;
		l1 = w1;
		w1 = z;
	}
	if (l2 < w2)
	{
		int z = l2;
		l2 = w2;
		w2 = z;
	}
	if (w2 < h2)
	{
		int z = w2;
		w2 = h2;
		h2 = z;
	}
	if (l2 < w2)
	{
		int z = l2;
		l2 = w2;
		w2 = z;
	}

	if (l1 + l2 >= l_c && w1 + w2 >= w_c && h1 + h2 >= h_c)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
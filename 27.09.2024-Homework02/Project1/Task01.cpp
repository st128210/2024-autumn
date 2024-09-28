#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;

	scanf_s("%d", &x1);
	scanf_s("%d", &y1);

	int x2 = 0;
	int y2 = 0;

	scanf_s("%d", &x2);
	scanf_s("%d", &y2);

	if ((x1 == x2 || y1 == y2 || abs(x2 - x1) == abs(y2 - y1)) && (x1 != x2 || y1 != y2))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
	return 0;
}
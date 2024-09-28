#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int r1 = 0;

	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	scanf_s("%d", &r1);

	int x2 = 0;
	int y2 = 0;
	int r2 = 0;

	scanf_s("%d", &x2);
	scanf_s("%d", &y2);
	scanf_s("%d", &r2);

	float y_r = y2 - y1;
	float x_r = x2 - x1;
	float R = sqrt(y_r * y_r + x_r * x_r);

	if (r1 + r2 >= R && R + r1 >= r2 && R + r2 >= r1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}
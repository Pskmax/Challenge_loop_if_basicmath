#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, i, j, n = 0;
	float average = 0, sum = 0, sumSD = 0, SD, c, z;
	scanf_s("%d %d", &a, &b);
	if (a < b)
	{
		for (i = a; i <= b; i++)
		{
			printf("%d ", i);
			sum += i;
			n++;
		}
		average = sum / n;
		for (j = a; j <= b; j++)
		{
			c = j - average;
			c = c * c;
			sumSD += c;
		}
		z = sumSD / (n-1);
		SD = sqrt(z);
	}
	if (a > b)
	{
		for (i = a; i >= b; i--)
		{
			printf("%d ", i);
			sum += i;
			n++;
		}
		average = sum / n;
		for (j = b; j <= a; j++)
		{
			c = j - average;
			c = c * c;
			sumSD += c;
		}
		z = sumSD / (n-1);
		SD = sqrt(z);
	}
	printf("\nAverage = %.2f", average);
	printf("\nSD = %.2f", SD);
	return 0;
}
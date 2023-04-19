#include <stdio.h>

void reverse(int a[], int c, int d)
{
	while (c < d)
	{
		int temp = a[c];
		a[c] = a[d];
		a[d] = temp;
		c++; d--;
	}

}
int main(void)
{
	int n, m, c, d;
	int a[101];
	scanf_s("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		a[i] = i+1;
	}
	for (int j = 0; j < m; j++)
	{
		scanf_s("%d %d", &c, &d);
		reverse(a, c-1, d-1);
	}
	for (int k = 0; k < n; k++)
	{
		printf("%d ", a[k]);
	}
}


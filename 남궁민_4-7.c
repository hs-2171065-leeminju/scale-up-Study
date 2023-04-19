#include <stdio.h>

int main(void)
{
	int n[31] = {0};
	int a;

	for (int i = 0; i < 28; i++){
		scanf_s("%d", &a);
		n[a] = 1;
	}
	for (int j = 1; j <= 30; j++){
		if (n[j] == 0)
			printf("%d\n", j);
	}
	return 0;
}
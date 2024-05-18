#include<stdio.h>
int prime(int n);
int main(void) {
	int a, sum = 0, num = 2;
	scanf("%d", &a);
	while (sum<a)
	{
		if (prime(num++))
		{
			sum++;
		}
	}
	printf("第%d個質數:%d", a, num);
}
int prime(int n) {
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
#include <stdio.h>

void ABC(int *a, int *b, int N)
{
	if(N >= 2)
	{
		N /= 2;
		ABC(a,     b,     N);
		ABC(a + N, b + N, N);
		printf("%d\n", N);
	}
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8};
	int arr2[] = { 9, 10, 11, 12, 13, 14, 15, 16};
	ABC(arr1, arr2, 8);
	return 0;
}

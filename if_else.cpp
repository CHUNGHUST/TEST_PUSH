#include <stdio.h>

int main()
{
	int x;
	printf("nhap so x = ");
	scanf("%d", &x);
	
	if(x == 1) printf("a\n");
	else 
		if (x == 2 )printf("b\n");
		else printf("nothing\n");
	
	return 0;
}

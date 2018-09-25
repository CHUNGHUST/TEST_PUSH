#include <stdio.h>

void cd(int x)
{
	void cr(int y)
	{
		printf("y = %d", y);
	}
	
	cr(0);
	pritnf("x = %d", x);
}

int main()
{
	cd(0);
	return 0;
}

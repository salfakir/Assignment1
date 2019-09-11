#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	if (argc != 2) {
		printf("incorrect number of values entered, enter a number to get the phi function of it\n");
		return 0;
	}
	int num = strtol(argv[1], NULL, 10), i,j, count=1, notfound=1;
	for (j = num-1; j > 1; j--)
	{
		for (i = j; i > 1; i--)
		{
			if (num % i == 0 && j % i == 0) {
				notfound = 0;
				break;
			}
		}
		if (notfound==1) {
			count++;
		}
		notfound = 1;
	}
	printf("phi(%d) = %d ", num, count);
	return 0;
}

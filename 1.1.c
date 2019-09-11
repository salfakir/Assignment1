#include <stdio.h>
#include <math.h>
int test(int i, int k) {
	int j = i;
	float sum = 0;
	while (j != 0) {
		sum += pow(j % 10, k);
		j = (j / 10);
	}
	if ((int)sum == i) {
		return 1;
	}
	return 0;
}
int main(int argc, char* argv[])
{
	if (argc !=4) {
		printf("incorrect number of values entered, needs 3\n");
		return 0;
	}
	int k = strtol(argv[1], NULL, 10), p = strtol(argv[2], NULL, 10), q = strtol(argv[3], NULL, 10);
	int result = 0;
	
	
	int i = pow(10, k - 1)+1;
	printf("program ran k=%d p=%d q=%d i=%d\n", k, p, q,i);
	while (i < (int)pow(10, k) && i <= q && i >= p) {//&&i>=q
		result = test(i, k);
		if (result == 1) {
			printf("%d \n", i);
		}
		i++;
	}
	return 0;
}

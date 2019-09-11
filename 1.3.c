#include <stdio.h>
void rmchr(char *p, char c) {
	int i=0,j=0;
	while (*(p + i) != '\0')
	{
		if (*(p + i) == c) {
			while (*(p + i + j) != '\0') {
				*(p + i + j) = *(p + i + j + 1);
				j++;
			}
			j = 0;
		}
		else {
		i++;
		}
	}
}
int main(int argc, char* argv[])
{
	if (argc != 3) {
		printf("incorrect number of values entered, enter string and a character to remove the character form the string\n");
		return 0;
	}
	
	char* p = argv[2];
	rmchr(p, argv[1][0]);
	printf("the edited string : %s",p);
	return 0;
}
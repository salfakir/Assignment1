#include <stdio.h>
void rmchr(char* p, char c) {
	int i = 0, j = 0;
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
void rmstr(char* p1, char* p2) {
	int i = 0;
	while (*(p2 + i) != '\0')
	{
		rmchr(p1, *(p2 + i));
		i++;
		
	}
}
int main(int argc, char* argv[])
{
	if (argc != 3) {
		printf("incorrect number of values entered, enter two strings \n");
		return 0;
	}
	char* p= argv[1];
	rmstr(p ,argv[2]);
	printf("the edited string : %s", p);
	return 0;
}
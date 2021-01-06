#include <stdio.h>
#include <stdlib.h>

int main() {

	char mass[] = "Ivanov";
	int a = strlen(mass);
	char* res = (char*)malloc((a + 9) * sizeof(char));

	for (int i = 0; i < a + 6; i++)
	{
		if (i <=4 || i >= 11) {
			res[i] = '_';
			printf("%c", res[i]);
		}
		else {
			res[i] = mass[i - 3];
			printf("%c", res[i]);
		}
	}
	return 0;
}
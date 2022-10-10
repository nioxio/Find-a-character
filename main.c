#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	printf("\033[33mPlease Enter a Text : \033[36m");
	char input[999];
	int i = 0;
	int foundCharTimes = 0;
	scanf("%999[^\n]", &input);
	fseek(stdin, 0, SEEK_END);
	printf("\033[33mPress the character you want to look for in the text.\n");
	char lookFor = tolower(getch());
	while (i < 999) {
		if (tolower(input[i]) == lookFor) {
			foundCharTimes += 1;
		}
		i += 1;
	}
	printf("\033[32mThe character '%c' was found %d times.\n", lookFor, foundCharTimes);
	printf("\033[31mPress Q to terminate or enter to continue.\n");
	if (tolower(getch()) == 'q') {
		printf("\033[30m");
		return 0;
	}
	main();
}
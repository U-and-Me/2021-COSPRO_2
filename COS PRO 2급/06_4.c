#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* cards[][2], int cards_len) {
	int answer = 0;
	int color[] = { 0, 0, 0 };
	int max = 1;
	for (int i = 0; i < cards_len; i++) {
		answer += atoi(cards[i][1]);
		if (strcmp(cards[i][0], "blue") == 0) color[0]++;
		else if (strcmp(cards[i][0], "red") == 0) color[1]++;
		else color[2]++;
	}
	if (color[0] < color[1])
		if (color[1] < color[2]) max = color[2];
		else max = color[1];
	else
		if (color[0] < color[2]) max = color[2];
		else max = color[0];
	answer *= max;
	return answer;
}

int main() {
	char* cards1[][2] = { {"blue", "2"}, {"red", "5"}, {"black", "3"} };
	int cards_len1 = 3;
	int ret1 = solution(cards1, cards_len1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	char* cards2[][2] = { {"blue", "2"}, {"blue", "5"}, {"black", "3"} };
	int cards_len2 = 3;
	int ret2 = solution(cards2, cards_len2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}s
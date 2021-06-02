#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(char* characters) {
    char* ans = malloc(sizeof(char) * strlen(characters));
    int len = 1;
    ans[0] = characters[0];
    for (int i = 1; i < strlen(characters); i++) {
        if (characters[i - 1] != characters[i]) {
            ans[len++] = characters[i];
        }
    }
    ans[len] = NULL;
    return ans;
}

int main() {
    char* characters = "senteeeencccccceeee";
    char* ret = solution(characters);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}
#include <stdio.h>

int solution(int scores[], int scores_len) {
    int cnt = 0;
    for (int i = 0; i < scores_len; i++) {
        if (scores[i] >= 650 && scores[i] < 800) cnt++;
    }
    return cnt;
}

int main() {
    int scores[10] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
    int scores_len = 10;
    int ret = solution(scores, scores_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
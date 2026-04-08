#include "Array.h" // 요약본(헤더)을 가져옴

// 최대 화소 밝기를 구해서 반환하는 함수 구현
int getMaxBrightness(int img[HEIGHT][WIDTH]) {
    // 1. 임시 최댓값을 배열의 첫 번째 값으로 초기화합니다.
    int max_val = img[0][0];

    // 2. 이중 반복문으로 8x8 배열의 모든 칸을 순회합니다.
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            // 3. 현재 칸의 밝기가 max_val보다 크면 갱신합니다.
            if (img[i][j] > max_val) {
                max_val = img[i][j];
            }
        }
    }

    // 4. 최종적으로 찾은 가장 큰 값을 반환합니다.
    return max_val;
}
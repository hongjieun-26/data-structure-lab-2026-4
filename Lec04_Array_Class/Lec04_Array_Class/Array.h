#pragma once

// 배열의 가로, 세로 크기 정의
#define HEIGHT 8
#define WIDTH 8

// 최대 화소 밝기를 구해서 반환하는 함수 선언
int getMaxBrightness(int img[HEIGHT][WIDTH]);
#pragma once
#include <cstdio>
#define MAX_DEGREE 80 // 다항식의 처리 가능한 최대 차수+1

class Polynomial {
	int degree; // 다항식의 최고 차수
	float coef[MAX_DEGREE]; // 각 항에 대한 계수

public:
	Polynomial() { degree = 0; } // 생성자: 최대 차수를 0으로 초기화

	// 다항식의 내용을 입력받는 멤버함수
	void read() {
		printf("Enter highest degree of polynomial: ");
		scanf_s("%d", &degree);
		printf("Enter cofficients (total %d): ", degree + 1);
		for (int i = 0; i <= degree; i++)
			scanf_s("%f", coef + i);
	}

	// 다항식의 내용을 화면에 출력하는 함수
	void display(const char* str = " Poly = ") { // 디폴트 매개변수 사용
		printf("\t%s", str);
		for (int i = 0; i < degree; i++)
			printf("%5.1f x^%d + ", coef[i], degree - i);
		printf("%4.1f\n", coef[degree]);
	}

	// 멤버 함수 선언 추가
	void add(Polynomial a, Polynomial b);
	bool isZero();
	void negate();
};
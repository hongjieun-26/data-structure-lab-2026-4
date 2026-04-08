#include <iostream>
#include <locale.h> // 추가: 지역 설정 헤더
#include "Polynomial.h"

int main() {
	// 추가: 프로그램 전체의 언어 설정을 한국어로 강제 고정
	setlocale(LC_ALL, "korean");

	Polynomial a, b, c;
	a.read(); // 다항식 a를 읽음 (키보드로 입력)
	b.read(); // 다항식 b를 읽음 (키보드로 입력)

	c.add(a, b); // c = a + b

	a.display("A = "); // 다항식 a를 화면에 출력
	b.display("B = "); // 다항식 b를 화면에 출력
	c.display("A+B="); // 다항식 c=a+b를 화면에 출력

	return 0;
}
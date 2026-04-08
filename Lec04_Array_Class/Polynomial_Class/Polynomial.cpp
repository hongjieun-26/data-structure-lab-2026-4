#include "Polynomial.h"

void Polynomial::add(Polynomial a, Polynomial b) {
	if (a.degree > b.degree) { // a항 > b항
		*this = a; // a 다항식을 자기 객체에 복사
		for (int i = 0; i <= b.degree; i++)
			coef[i + (degree - b.degree)] += b.coef[i];
	}
	else { // a항 <= b항
		*this = b; // b 다항식을 자신에 복사
		for (int i = 0; i <= a.degree; i++)
			coef[i + (degree - a.degree)] += a.coef[i];
	}
}

// 클래스 소속 명시
bool Polynomial::isZero() {
	return degree == 0;
}

// 클래스 소속 명시 및 부호 반전 로직 구현
void Polynomial::negate() {
	for (int i = 0; i <= degree; i++) {
		coef[i] = -coef[i];
	}
}
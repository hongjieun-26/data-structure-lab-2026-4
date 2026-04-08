#include <iostream>
#include "Car.h"

int main() {
	Car myCar(0, "MyCar", 2);

	std::cout << "---Initial state of the car---" << std::endl;
	myCar.display();

	myCar.changeGear(5);
	myCar.speedUp();
	myCar.speedUp();

	std::cout << "\n---Post driving condition of the car---" << std::endl;
	myCar.display();
	myCar.whereAmI();

	return 0;
}
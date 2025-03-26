//Input Validation: Do not accept values 0 or less for the weight of the package.
//Do not accept weights of more than 20 kg (this is the maximum weight the company will ship).
//Do not accept distances of less than 10 miles or more than 3,000 miles.
//Weight of package in kg	|Rate per 500 miles shipped
//0 < x <= 2kg				|$1.10
//2kg < x <= 6kg			|$2.20
//6kg < x <= 10kg			|$3.70
//10kg < x <= 20kg			|$4.80

#include <iostream>
#include <iomanip>

int main() {

	float weight, distance, shippingCharge;
	float rate[] = {1.10, 2.20, 3.70, 4.80 };

	std::cout << "Enter weight of package:\n";
	std::cin >> weight;
	std::cout << "Enter distance shipped:\n";
	std::cin >> distance;

	if (distance > 0 && distance <= 3000) {
		if (weight > 0 && weight <= 2) {
			shippingCharge = (distance / 500) * rate[0];
			std::setprecision(2);
			std::cout << "The price to ship this item is : $" << shippingCharge << std::endl;
		}
		else if (weight > 2 && weight <= 6) {
			shippingCharge = (distance / 500) * rate[1];
			std::setprecision(2);
			std::cout << "The price to ship this item is : $" << shippingCharge << std::endl;
		}
		else if (weight > 6 && weight <= 10) {
			shippingCharge = (distance / 500) * rate[2];
			std::setprecision(2);
			std::cout << "The price to ship this item is : $" << shippingCharge << std::endl;
		}
		else if (weight > 10 && weight <= 20) {
			shippingCharge = (distance / 500) * rate[3];
			std::setprecision(2);
			std::cout << "The price to ship this item is : $" << shippingCharge << std::endl;
		}
		else {
			std::cout << "Invalid weight or over weight" << std::endl;
		}
	}
	else {
		std::cout << "Invalid Distance or distance too far" << std::endl;
	}

	return 0;
}
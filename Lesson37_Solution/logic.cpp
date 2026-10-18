#include "logic.h"

bool is_prime_number(int number) {
	bool result = true;
	if (number <= 1) {
		result = false;
	}

	int count = sqrt(number);

	for (int div = 2; div <= count; div++) {
		
		if (number % div == 0) {
			result = false;
			break;
		}

	}
	
	return result;
}
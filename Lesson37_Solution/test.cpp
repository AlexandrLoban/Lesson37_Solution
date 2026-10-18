#include "test.h"

void test(int number, bool expected, string test_name) {	
	bool actual = is_prime_number(number);
	string msg = test_name + " ---> ";

	msg += actual == expected ? "PASS" : "FAIL";
	cout << msg << "\n";
}

void run_all_tests() {
	test(-2, false, "test01");
	test(-1, false, "test02");
	test(1, false, "test03");
	test(26, false, "test04");
	test(100, false, "test05");
	test(9, false, "test06");
	test(2, true, "test07");
	test(3, true, "test08");
	test(5, true, "test09");
	test(29, true, "test10");
	test(0, false, "test11");
}
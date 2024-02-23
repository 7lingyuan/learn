#include <iostream>
#include "../include/mymath.h"

using namespace std;

int main()
{
	cout << "1 + 2 = " << add(1, 2) << endl;
	cout << "1 - 2 = " << sub(1, 2) << endl;
	cout << "1 * 2 = " << mul(1, 2) << endl;
	cout << "1 / 2 = " << division(1, 2) << endl;
	cout << "-----------------------------------" << endl;
	auto str = "string";
	cout << (void*)typeid(str).name() << endl;
	return 0;
}
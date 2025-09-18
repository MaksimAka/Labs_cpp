#include <iostream>

int main() {
	setlocale(LC_ALL, "Rus");
	char c1;
	unsigned char c2;
	short s1;
	unsigned short s2;
	int i1;
	unsigned int i2;
	long long ll1;
	unsigned long long ll2;
	double d;
	float f;
	bool b;

	std::cout << "bool: " << sizeof(b) << "значения только true или false" << "\n"
		"char: " << sizeof(c1) << "байт, значения[" << CHAR_MIN << "," << CHAR_MAX << "]\n"
		"unsigned char: " << sizeof(c2) << "байт, значения[" << 0 << "," << UCHAR_MAX << "]\n"
		"short: " << sizeof(s1) << "байт, значения[" << SHRT_MIN << "," << SHRT_MAX << "]\n"
		"unsigned short: " << sizeof(s2) << "байт, значения[" << 0 << "," << USHRT_MAX << "]\n"
		"int: " << sizeof(i1) << "байт, значения[" << INT_MIN << "," << INT_MAX << "]\n"
		"unsigned int: " << sizeof(i2) << "байт, значения[" << 0 << "," << UINT_MAX << "]\n"
		"long long: " << sizeof(ll1) << "байт, значения[" << LLONG_MIN << "," << LLONG_MAX << "]\n"
		"unsigned long long: " << sizeof(ll2) << "байт, значения[" << 0 << "," << ULONG_MAX << "]\n"
		"double: " << sizeof(d) << "байт, значения[" << std::numeric_limits<double>::min() << "," << std::numeric_limits<double>::max() << "]\n"
		"float: " << sizeof(f) << "байт, значения[" << std::numeric_limits<float>::min() << "," << std::numeric_limits<float>::max() << "]\n";
		

	int a = 10;
	std::cout << a << std::endl;

	a = a + 8;
	std::cout << a;



	 return 0;

}



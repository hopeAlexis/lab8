//Variant 5.

#include <iostream>

int main()
{
	unsigned long long a = 0b10101010111100000000000011111111; //using a binary number to easily see each byte
	unsigned long long* p = &a;
	std::byte* pb = (std::byte*)p;
	for (int i = 0; i < sizeof(unsigned long long); i++)
	{
		std::cout << (int)*(pb + i) << " "; // pb + i -> output of the next byte to the right
	}
std:: cout << a;
}
#include <iostream>

template <typename T>
T laske(T luku1, T luku2, T luku3)
{
	T tulos = (luku1 + luku2 + luku3) / 3;

	return tulos;
}

int main()
{
	float tulos = laske(1.1, 2.2, 3.3);
	std::cout << tulos << std::endl;
}


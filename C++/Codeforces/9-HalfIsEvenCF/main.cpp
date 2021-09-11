#include <iostream>

int main()
{
    int kilos;
	std::cin >> kilos ;
    kilos>2 && kilos%2==0 ? std::cout << "YES" << std::endl :  std::cout << "NO" << std::endl ;
    
	return 0;
}

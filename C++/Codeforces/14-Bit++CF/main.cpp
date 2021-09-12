//https://codeforces.com/problemset/problem/282/A

#include <iostream>
#include <vector >

int main()
{
    int x{0},numOfoperations{0};
    std::cin >> numOfoperations ;
    std::string operation ;
    std::vector < std::string > allOperations ;
    for ( int i =0 ; i < numOfoperations ; i ++ ){
	std::cin >> operation ; 
    allOperations.push_back(operation);
    }
    
    for ( int i =0 ; i < numOfoperations ; i ++ ){
	operation = allOperations.at(i);
    int plusCounter{0} , minusCounter {0};
        for ( int j = 0 ; j < 3 ; j++ ){
          if ( operation.at(j) == '+' ){
              plusCounter++;
              }
        else if (operation.at(j) == '-' ) {
            minusCounter++;
        }
        }
        if (plusCounter == 2 ){
            x++;
        }else if (minusCounter ==2 ){
            x--;
        }
    }
    std::cout<<x << std::endl ;
    
    
	return 0;
}

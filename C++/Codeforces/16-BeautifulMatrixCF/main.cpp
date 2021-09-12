//https://codeforces.com/problemset/problem/263/A
#include <iostream>

int main()
{
    bool mat[5][5];
    int onePositionX{0} , onePositionY {0}, moves{0};
    for (int i = 0 ; i <5 ;i++){
        for (int j=0 ; j < 5 ; j++){
            std::cin >> mat[i][j] ;
            if (mat[i][j]==1){
                onePositionX = i;
                onePositionY = j ;
                }
            }
        }
    while (onePositionX != 2 ){ 
        
        if (onePositionX > 2){
            onePositionX-- ;
            moves++;
        }else {
            onePositionX++ ;
            moves++;
        }
    }
    while (onePositionY != 2 ){ 
        
        if (onePositionY > 2){
            onePositionY-- ;
            moves++;
        }else {
            onePositionY++ ;
            moves++;
        }
    }
	std::cout << moves << std::endl  ;
    
	return 0;
}

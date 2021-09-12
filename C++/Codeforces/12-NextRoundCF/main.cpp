#include <iostream>
#include <vector>

int main()
{
    int participantsNum{0} , kPlace{0};
	std::cin >> participantsNum >> kPlace ;
    std::vector < int > participants ;
    for (int i = 0 ; i < participantsNum ; i++){
        int value {0} ;
        std::cin >> value ;
        participants.push_back(value);
        }
    int limitScore {0} , counter {0};
    limitScore = participants.at(kPlace-1) ;
    
    for (int i = 0 ; i < participantsNum ; i++){
        if ( participants.at(i) >= limitScore &&  participants.at(i) !=0 ){
            counter++;
            }else {continue;}
            
        }
        
    std::cout<<counter<< std::endl ;
    
	return 0;
}

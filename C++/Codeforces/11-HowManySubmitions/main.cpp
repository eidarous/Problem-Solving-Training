#include <iostream>
#include <vector>

int main()
{
    int numOfProblems{0};
	std::cin >> numOfProblems ;
    std::vector < std::vector < bool > > probelms ;
    std::vector < bool > oneProblem ;
    for(int i= 0 ; i<numOfProblems ; i++){
        bool value;
        for (int j=0 ; j < 3 ; j++){
            std::cin >> value ;
            oneProblem.push_back(value);
        }
        probelms.push_back(oneProblem);
        oneProblem.clear();
    }
    int numOfImplemtations {0};
    for(int i= 0 ; i<numOfProblems ; i++){
        int numOfRightAnswers{0};
        for (int j=0 ; j < 3 ; j++){
             if (probelms.at(i).at(j)==true){
                 numOfRightAnswers++;
                }
            }
        if (numOfRightAnswers >=2){
            numOfImplemtations++;
            numOfRightAnswers=0;
            }
        }
    std::cout<< numOfImplemtations << std::endl ;
	return 0;
}

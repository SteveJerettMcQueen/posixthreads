/*


*/

#include <iostream>
#include <string>
#include <vector>

#include "hill.hpp"

void *hill_runnable(void *arg){
    
    std::vector<std::vector<std::string>> *input_vector_ptr = (std::vector<std::vector<std::string>>*) arg;
    std::vector<std::vector<std::string>> input_vector = *input_vector_ptr;
    
    for(int i = 0; i < input_vector.size(); i++){
        std::cout << input_vector[i][0] << ", "
                  << input_vector[i][1] << ", "
                  << input_vector[i][2] << std::endl;
        
    }
    
    std::cout << ">>> Hill Function Ended <<<" << std::endl;
    return 0;
}
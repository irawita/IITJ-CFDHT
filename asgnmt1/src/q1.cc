#include <iostream> 

int main(){
	float epsilon=1;
	float total=1;
	while(total+epsilon > 1){
	
		std::cout << epsilon << std::endl;
		epsilon = epsilon/2;
	
	}

	std::cout << "Epsilon is equal to " << epsilon << std::endl;
	return 0;


}

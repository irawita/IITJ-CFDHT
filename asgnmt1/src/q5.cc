#include <iostream>
#include <vector>
#include <algorithm>


//provide it a number and an array to populate it with 
void sepDigits(int n, std::vector<int>& digitArray){
  while(n>0){
    int digit = n%10;
    n /= 10;
    std::cout << digit << " " << std::endl;
    digitArray.push_back(digit);
  }
  std::reverse(digitArray.begin(), digitArray.end());
}
//making things cleaner

void printVector(std::vector<int>& digitArray){
  for(int m : digitArray)
    std::cout << m << ' ';
  std::cout << '\n';
}

//provide two arguments, one with the number, and one with the digits it contains 
int main(){
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;

  std::vector<int> digitArray;
  
  sepDigits(n, digitArray);
  printVector(digitArray);
  
  return 0;


}

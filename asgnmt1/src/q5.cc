#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>
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


int main(int argc, char *argv[]){
  //first argument m, second p
  int m = std::atoi(argv[1]);
  int p = std::atoi(argv[2]);
  std::vector<int> xi{};

  for (int i = std::pow(10, m-1); i < std::pow(10, m); ++i){
    if (i%p == 0)
     xi.push_back(i); 
  }

  std::cout << xi.size() << std::endl;
  long long xixj = 0;
  long long xixjnoteq = 0; //exclude cases where i=j
  long long xixjless = 0; // only include i < j 

  for (int i {0}; i < xi.size(); ++i)
  {
    for (int j {0}; j < xi.size(); ++j)
    {
      xixj += (xi[i] * xi[j]);
      if (i != j)
        xixjnoteq += (xi[i] * xi[j]);
      if (i < j)
        xixjless += (xi[i] * xi[j]);
    }
  }
  std::cout << xixj << ' ' << xixjnoteq << ' ' << xixjless << std::endl;
  std::cout << xixjnoteq << ' ' << xixjless*2 << std::endl; //these are equal
  //the sum of both triangles are the same

  //excluding i = j cases
}

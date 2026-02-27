#include <iostream>
#include "helpers.h"
#include <cmath>
#include <iomanip>

int main(){
  int x = 5;
  int n = 1;
  double exp5 = 1;
  
  while (expTerm(x, n) > 1e-5){
    ++n;
    exp5 += expTerm(x, n); 
  }
 int y = -5;
 int m = 1;
 double expm5 = 1;

  std::cout << expTerm(-5, 3) << std::endl;
 while (std::abs(expTerm(y, m)) > 1e-5){
    ++m;
    expm5 += expTerm(y, m); 
  }
 
  std::cout << "The " << n << "th term is " << expTerm(x, n) << std::endl;  
  std::cout << "The second term is " << expTerm(x, 2) << std::endl;
  // the "first" term, i.e. 1 is considered the zeroth term 
  std::cout << std::fixed << std::setprecision(5);
  std::cout << "exp<x=5> is " << exp5 << " versus from the built-in " << std::exp(5) << std::endl; 
  std::cout << "exp<x=-5> is " << expm5 << " versus from the built-in " << std::exp(-5) << std::endl; 

}

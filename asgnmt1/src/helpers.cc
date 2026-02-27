#include <iostream>
#include <cmath>
#include "helpers.h"

void q2summer(int n, float& term, float& summation){
  for (int count{1}; count <= n; ++count){
    term *= (5+3*count);
    term /= (5+4*count);
    std::cout << "Term number " << count << " is " << term << std::endl;
    summation += term;
    std::cout << "Summation number " << count << " is " << summation << std::endl;
  }
}


float expTerm(float x, int termNum){
  // we're using tgamma of num+1 as num!, they're the same for positive integers
  return (std::pow(x, termNum)/std::tgamma(termNum+1));  
}



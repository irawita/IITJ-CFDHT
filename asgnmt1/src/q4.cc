#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <iomanip>

float sumRange(int n1, int n2){
  float sum = 0;
  for (int n = n1; n <= n2; ++n){
    sum += 1/(std::pow(n, 2));

  }
  return sum;
}

//pass your numerical function and analytical value into this, if you want 1e-5 precision, pass THAT into the function
int nTerms(float orderPrecision, float analyticalVal, float (*fcnPtr)(int, int)){
  int n = 1;
  while((-fcnPtr(1, n) + analyticalVal) > orderPrecision/2){
    //std::cout << fcnPtr(1, n) << std::endl;
    n++;
  }
  return n;
}

int main(){
  // the 10th term is smaller than 0.01
  // are the next ten terms combined smaller? nope
  float analyticalVal = (std::pow(M_PI, 2))/6; //can be computed analytically with parseval's equation 
  std::cout << analyticalVal << " " << nTerms(1e-4, analyticalVal, sumRange) << " " << std::endl;
  return 0;




}

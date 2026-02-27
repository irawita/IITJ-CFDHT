#include <iostream>

//argument being the number of terms
void q2summer(int n, float& term, float& summation){
  for (int count{1}; count <= n; ++count){
    term *= (5+3*count);
    term /= (5+4*count);
    std::cout << "Term number " << count << " is " << term << std::endl;
    summation += term;
    std::cout << "Summation number " << count << " is " << summation << std::endl;
  }
}


int main(int argc, char* argv[])
{
  float term = 2;
  float summation = 2;
  int n = std::atoi(argv[1]); 
  q2summer(n, term, summation); 
  return 0;
}
//finally upon running the code, it requires 47 terms to achieve an accuracy of 10^-5.

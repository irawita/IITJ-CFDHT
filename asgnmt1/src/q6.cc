#include <iostream> 
#include <cmath>
const double N_PI = 3.141592653589793;

int main(){

  //since it is an alternating series, the remainder's upper bound is a_{N+1}
  int i = 2;

  for (; std::abs((std::sin(i * N_PI /4)/i)) > 0.5 * 1e-5; i+=4){
    // std::cout << i << std::endl << std::abs((std::sin(i * N_PI /4)/i));
  }
  std::cout << i << " " << std::sin(i * N_PI /4)/i << std::endl;

  float x = 0;


  //finding the actual fourier series
  for(int j{1}; j <= i; j++){
    x += 2*(std::pow(-1, j+1) * std::sin(j * N_PI / 4) /j);
  }
  std::cout << x << " v/s " << (N_PI /4) << std::endl;
  return 0;
}

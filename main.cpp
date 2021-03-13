#include <iostream>
using namespace std;

float func(float x) {
  return x * x;
}

float integral(float (*f)(float), float a, float b, int n) {
  float width, sum;
  int i;

  width = (b - a) / n;
  sum = 0;

  for(i = 1; i <= n; i++) {
    sum += f(a + (i - 1) * width) * width;
  }

  return sum;
}

float deriv(float (*f)(float), float x) {

}

int main() {
  cout << "I = " << integral(func, 5, 15, 1000000) << endl;
  return 0;
}
float integral(float (*f)(float), float a, float b, int n) {
  float width, sum;
  int i;

  width = (b - a) / n;
  sum = 0;

  for(i = 0; i < n; i++) {
    sum += f(a + i * width) * width;
  }

  return sum;
}

float deriv(float (*f)(float), float x) {

}
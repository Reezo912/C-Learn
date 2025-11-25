#include <stdio.h>

// ax2 + bx + c = 0

double absoluteValue(double x) { return x < 0 ? -x : x; }

double squareRoot(double x) {

  const double epsilon = .00001;

  double guess = 1.0;

  while (absoluteValue(guess * guess - x) >= epsilon)

    guess = (x / guess + guess) / 2.0;

  return guess;
}

double valid_or_no(double a, double b, double c) {
  double result = (b * b) - 4 * a * c;

  return result;
}

int main(void) {

  double a, b, c;

  printf("Introduce a, b y c en ese orden: \n");
  scanf("%lf %lf %lf", &a, &b, &c);

  double discriminante = valid_or_no(a, b, c);

  if (discriminante < 0) {
    printf("The root is imaginary.\n");
    return 0;
  }

  else {
    float raizDiscriminante = squareRoot(discriminante);
    double x_pos = (-b + raizDiscriminante) / (2 * a);
    double x_neg = (-b - raizDiscriminante) / (2 * a);

    printf("El resultado para el positivo es: %f\n", x_pos);
    printf("El resultado para el positivo es: %f\n", x_neg);
  }
  return 0;
}

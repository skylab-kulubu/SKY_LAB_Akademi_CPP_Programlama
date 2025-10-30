#include <iostream>

int factorial(const int num) {
  if (num <= 1) {
    return 1;
  }
  return num * factorial(num-1);
}

int compute_fibonacci(const int n) {
  if (n < 2) {
    return n;
  }
  return compute_fibonacci(n-1) + compute_fibonacci(n-2);
}

void print_fibonacci_seq(const int n, size_t idx = 1) {
  if (idx > n) {
    return;
  }
  std::cout << compute_fibonacci(idx) << '\n';
  return print_fibonacci_seq(n, idx+1);
}

int main() {
  print_fibonacci_seq(5);

  return 0;
}
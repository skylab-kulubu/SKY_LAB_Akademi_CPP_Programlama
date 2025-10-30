#include <iostream>

// Pointers, C-style memory allocation / C++ style memory allocation, simple arrays
int main() {
  int num{ 5 };
  int* ptr{ &num };
  std::cout << "Value of ptr: " << ptr << ", value of ptr pointing to: " << *ptr << '\n';

  // Creating a pointer pointing to a literal
  auto ptr_to_literal{ new int(10) };
  std::cout << "Value of ptr_to_literal: " << ptr_to_literal <<
    " value of ptr_to_literal pointing to: " << *ptr_to_literal << "\n\n";

  // Proper (and needed) cleanup
  delete ptr_to_literal;
  ptr_to_literal = nullptr;
  // std::cout << ptr_to_literal << *ptr_to_literal; // -> Error

  // Pointer dereferences only char wide even if we allocated int wide memory
  char* p{ (char*)malloc(sizeof(int)) };
  *p = 2400;
  std::cout << (int)*p << ' ' << 2400%256 << "\n\n";

  // Simple arrays
  const size_t n{ 5 };

  // C-style dynamic array
  int* arr = (int*)malloc(sizeof(*arr) * n);
  free(arr);

  // C++ style dynamic array
  int* cpp_arr{ new int[n] };
  for (int i = 0; i < n; ++i) {
    cpp_arr[i] = i+5;
  }
  for (int i = 0; i < n; ++i) {
    std::cout << cpp_arr[i] << ' ';
  }
  std::cout << '\n';

  // Arrays decay to pointers
  for (int i = 0; i < n; ++i) {
    std::cout << *(cpp_arr+i) << ' ';
  }
  std::cout << "\n\n";
  delete[] cpp_arr;

  // nd array allocation
  auto arr_2d{ new int[5][5] };
  for (int i{}; i < 5; ++i) {
    for (int j{}; j < 5; ++j) {
      arr_2d[i][j] = (i+1) * (j+1);
    }
  }
  for (size_t i{}; i < 5; ++i) {
    for (size_t j{}; j < 5; ++j) {
      std::cout << arr_2d[i][j] << ' ';
    }
  std::cout << '\n';
  }
  // Alternative:
  // auto arr_2d{ new int*[5] };
  // for (int i{}; i < 5; ++i) {
  //   arr_2d[i] = new int[5];
  // }

  // Cleanup
  delete[] arr_2d;
}

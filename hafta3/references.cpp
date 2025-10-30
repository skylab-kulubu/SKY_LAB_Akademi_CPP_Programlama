#include <iostream>

void update_val(int num) {
  ++num;
}

void update_via_ptr(int* ptr) {
  ++(*ptr);
}

void update_via_ref(int& num) {
  ++num;
}

void update_addr(int* ptr) {
  ++ptr;
  std::cout << "Inside update_addr pointer points to: " << *ptr
  << ", pointer value: " << ptr
  << '\n';
}

void update_addr_by_ref(int*& ptr) {
  ++ptr;
  std::cout << "Inside update_addr pointer points to: " << *ptr
  << ", pointer value: " << ptr
  << '\n';
}

int main() {
  int num{ 5 };
  int& ref{ num };
  int* ptr{ &num };

  // A reference must be initialized
  // int& ref{}; // Won't compile

  // Reference won't create a new variable
  std::cout << "Value and address of num: " << num << &num
  << "\nValue of address of ref: " << ref << &ref
  << "\n\n";

  // Reassigning reference modifies original
  int num2{ 10 };
  ref = num2;
  std::cout << "num: " << num << ", num2: " << num2 << ", ref: " << ref << "\n\n";
  // If this re-referencing is needed, use pointers instead

  // Pass-by-value and pass-by-reference semantics
  int x{ 100 };
  std::cout << "Initial x: " << x << '\n';

  // No change
  update_val(x);
  std::cout << "x: " << x << '\n';

  // Updates
  update_via_ptr(&x);
  std::cout << "x: " << x << '\n';

  // Updates, simpler function, syntactic sugar
  update_via_ref(x);
  std::cout << "x: " << x << "\n\n";

  // Passing a pointer to function is still not pass-by-reference
  std::cout << "Initial x addr: " << &x << '\n';
  update_addr(&x);
  std::cout << "x addr: " << &x << "\n\n";

  // Modifying an address by reference
  int* x_ptr{ &x };
  std::cout << "Initial x_ptr: " << x_ptr << '\n';
  update_addr_by_ref(x_ptr);
  std::cout << "x_ptr: " << x_ptr << '\n';

  return 0;
}
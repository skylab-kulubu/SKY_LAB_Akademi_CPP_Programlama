#include <memory>
#include <iostream>

void raw_ptr_example() {
  const int n{ 5 };
  int* arr{ new int[n] };
  for (int i = 0; i < n; ++i) {
    arr[i] = i+1;
  }
}

void smart_ptr_example() {
  const int n{ 5 };
  auto arr2{ std::make_unique<int[]>(n) };
  for (int i = 0; i < n; ++i) {
    arr2[i] = 5*(i+1);
  }
}

int main() {
  std::unique_ptr<int> ptr1{ new int(10) };
  auto ptr2{ std::make_unique<int>(10) };
  std::cout << "ptr2: " << ptr2.get() << ", ptr2 val: " << *ptr2 << "\n\n";

  // Unique pointer disallows copying
  // std::unique_ptr<int> ptr3 = ptr2;

  // Unsafe unique pointer initialization
  // Double delete by both ptr4 and ptr5
  // {
  //   int* raw{ new int(10) };
  //   std::unique_ptr<int> ptr4{ std::make_unique<int>{ raw } };
  //   std::unique_ptr<int> ptr5{ raw };
  // }

  // You can check that smart pointer is deleted automatically after function ends.
  raw_ptr_example();
  smart_ptr_example();

  auto ptr3{ std::make_shared<int>(2) };
  std::cout << "ptr3 addr: " << ptr3.get() << ", ptr3 val: " << *ptr3 << '\n';
  std::cout << "Use count: " << ptr3.use_count() << "\n\n";

  auto ptr4{ ptr3 };
  std::cout << "ptr4 addr: " << ptr4.get() << ", ptr4 val: " << *ptr4 << '\n';
  std::cout << "Use count of ptr4: " << ptr4.use_count() << '\n';
  std::cout << "Use count of ptr3: " << ptr3.use_count() << '\n';
  // They both share underlying pointers and use counts

  return 0;
}

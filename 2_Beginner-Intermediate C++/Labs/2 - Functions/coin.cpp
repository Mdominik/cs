#include <iostream>

int main() {
  srand(time(NULL));
  std::cout << rand()%10;
  std::cout << rand()%10;
  std::cout << rand()%10;
  std::cout << rand()%10;
  
  return 0;
}

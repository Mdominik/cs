/* assert example */
#include <iostream>
#include <assert.h>     /* assert */
#include <exception>

int print_number(int& x) {
      std::cout << "Daj numer: " << std::endl;
      std::cin >> x;
      std::cout << 10/x;

}

int main ()
{
  int y;
  try{
      print_number (y);
  } catch (int e) {
      std::cout << "error number: " << e;
  }

  return 0;
}

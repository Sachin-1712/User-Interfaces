#include <iostream>
#include "rect.hpp"

int main() {

  Rectangle rect1(1, 2, 5, 10); 
  Rectangle rect2(3, 4, 8, 6);  


  std::cout << "Rectangle 1:" << std::endl;
  std::cout << "Perimeter: " << rect1.perimeter() << std::endl;
  std::cout << "Area: " << rect1.area() << std::endl;

  std::cout << "\nRectangle 2:" << std::endl;
  std::cout << "Perimeter: " << rect2.perimeter() << std::endl;
  std::cout << "Area: " << rect2.area() << std::endl;

  return 0;
}
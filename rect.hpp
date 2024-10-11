#pragma once
class Rectangle {
private:
  double x;
  double y;
  double width;
  double height;

public:
  Rectangle(double x, double y, double width, double height);
  Rectangle(double width, double height);

  double getX() const;
  double getY() const;
  double getWidth() const;
  double getHeight() const;
  double area() const;
  double perimeter() const; 
};
#pragma once

#include <iostream>

using namespace std;

class Coordinate {

  friend ostream& operator<<(ostream&, const Coordinate&);
  friend istream& operator>>(istream&, Coordinate&);

private:

  int x;
  int y;
  int z;

public:

  Coordinate();
  explicit Coordinate(int,int,int);
  ~Coordinate();

  Coordinate operator+ (const Coordinate&);
  Coordinate operator- (const Coordinate&);
  Coordinate operator* (const Coordinate&);
  // Coordinate operator/ (const Coordinate&); doesn't make sense

  Coordinate& operator++(); // prefix
  Coordinate operator++(int); // postfix
  Coordinate& operator--(); // prefix
  Coordinate operator--(int); // postfix

  int getx() const;
  int gety() const;
  int getz() const;

  void setx(int);
  void sety(int);
  void setz(int);

  void setc(int,int,int);

  // extra
  string toString() const;

};
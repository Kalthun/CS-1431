#include "Coordinate.h"
#include <sstream>
#include <iomanip>
using namespace std;

Coordinate::Coordinate() {
  x = 0;
  y = 0;
  z = 0;
}

Coordinate::Coordinate(int x, int y, int z): 
  x{x}, y{y}, z{z} {
}

Coordinate::~Coordinate() {
  // cout << endl << "Location Lost :(" << endl;
}

// cin/cout
ostream& operator<<(ostream& output, const Coordinate& c) {
  output << "(" << c.x << "," << c.y << "," << c.z << ")";
  return output;
}

istream& operator>>(istream& input, Coordinate& c) {
  // format: "(x,y,z)"
  input.ignore(1); // ignore "("
  input >> setw(1) >> c.x;
  input.ignore(1); // ignore ","
  input >> setw(1) >> c.y;
  input.ignore(1); // ignore ","
  input >> setw(1) >> c.z;
  input.ignore(1); // ignore ")"
  input.ignore(1); // to intuitively cascade
  // could do "ingore(2)" but easier to understand
  return input;
}

  
Coordinate Coordinate::operator+(const Coordinate& rh) {
  Coordinate c;
  c.x = this->x + rh.x;
  c.y = this->y + rh.y;
  c.z = this->z + rh.z;
  return c;
}


Coordinate Coordinate::operator-(const Coordinate& rh) {
  Coordinate c;
  c.x = this->x - rh.x;
  c.y = this->y - rh.y;
  c.z = this->z - rh.z;
  return c;
}

Coordinate Coordinate::operator*(const Coordinate& rh) {
  Coordinate c;
  c.x = this->x * rh.x;
  c.y = this->y * rh.y;
  c.z = this->z * rh.z;
  return c;
}


Coordinate& Coordinate::operator++() {
  this->x++;
  this->y++;
  this->z++;
  return *this;
}

Coordinate Coordinate::operator++(int) {
  Coordinate temp{*this};
  this->x++;
  this->y++;
  this->z++;
  return temp;
}

Coordinate& Coordinate::operator--() {
  this->x--;
  this->y--;
  this->z--;
  return *this;
}

// +=

Coordinate Coordinate::operator--(int) {
  Coordinate temp{*this};
  this->x--;
  this->y--;
  this->z--;
  return temp;
}


int Coordinate::getx() const {
  return x;
}

int Coordinate::gety() const {
  return y;
}

int Coordinate::getz() const {
  return z;
}


void Coordinate::setx(int x) {
  this->x = x;
}

void Coordinate::sety(int y) {
  this->y = y;
}

void Coordinate::setz(int z) {
  this->z = z;
}

void Coordinate::setc(int x, int y, int z) {
  this->x = x;
  this->y = x;
  this->z = x;
}

string Coordinate::toString() const {
  ostringstream output;
  output << "(" << x << "," << y << "," << z << ")";
  return output.str();
}
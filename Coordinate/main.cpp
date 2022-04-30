#include <iostream>
#include "Coordinate.h"

using namespace std;

void space(int n) {
  for(size_t i{0}; i<n; i++) {
    cout << endl;
  }
}

int main() {

  Coordinate c1;
  Coordinate c2{1,1,1};

  cout << c1.toString() << endl;
  cout << c2.toString() << endl;

  cout << ++c1 << endl;
  c1.setc(0,0,0);
  cout << c1++ << endl;
  c1.setc(0,0,0);
  
  cin >> c1 >> c2;
  cout << c1 << c2 << endl;
  
}
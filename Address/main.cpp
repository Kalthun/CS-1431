#include <iostream>
#include "Address.h"
#include "Person.h"
using namespace std;

int main() {

  Address a1{112, 0, "Blizzard Ave", "Thunder Bay", "Ontario"};
  Address a2{676, 23, "Volcano Dr", "Tide", "Wahaho"};

  Person p1{a1, "James", "McDonagh"};
  Person p2{a2, "Elliot", "Soul"};

  p1.displayPerson();

  cout << endl; // for spacing
  
  p2.displayPerson();
  
}
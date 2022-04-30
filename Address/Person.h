#ifndef PERSON
#define PERSON

#include <iostream>
#include "Address.h"
using namespace std;

class Person { 

public: 

  explicit Person(Address&, string = "Unknown", string = "Unknown");
  
  void displayPerson();

private: 

  Address addr;
  string firstName;
  string lastName;
  
};

#endif
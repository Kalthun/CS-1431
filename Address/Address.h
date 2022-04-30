#ifndef ADDRESS
#define ADDRESS

#include <iostream>
using namespace std;

class Address {

public:

  explicit Address(unsigned int = 0, unsigned int = 0, string = "N/A", string = "N/A", string = "N/A");

  // getters
  int getStreetNumber() const;
  int getAptNumber() const;
  string getStreetName() const;
  string getCity() const;
  string getProvince() const;

  // setters
  void setStreetNumber(unsigned int);
  void setAptNumber(unsigned int);
  void setStreetName(string);
  void setCity(string);
  void setProvince(string);

  // extra
  string toString() const;

private:

  unsigned int streetNumber;
  unsigned int aptNumber;
  string streetName;
  string city;
  string province;

};

#endif
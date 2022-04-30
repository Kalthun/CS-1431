#include "Address.h"
#include <sstream>

Address::Address(unsigned int streetNumber, unsigned int aptNumber, string streetName, string city, string province): streetName{streetName}, city{city}, province{province} {
  setStreetNumber(streetNumber);
  setAptNumber(aptNumber);
}

// getters
int Address::getStreetNumber() const {
  return this->streetNumber;
}

int Address::getAptNumber() const {
  return this->aptNumber;
}

string Address::getStreetName() const {
  return this->streetName;
}

string Address::getCity() const {
  return this->city;
}

string Address::getProvince() const {
  return this->province;
}

// setters
void Address::setStreetNumber(unsigned int streetNumber) {
  while(streetNumber < 0) {
    cout << "Invalid Input: please enter a non-negative value" << endl;
    cin >> streetNumber;
  }
  this->streetNumber = streetNumber;
}

void Address::setAptNumber(unsigned int aptNumber) {
  while(aptNumber < 0) {
    cout << "Invalid Input: please enter a non-negative value" << endl;
    cin >> aptNumber;
  }
  this->aptNumber = aptNumber;
}

void Address::setStreetName(string streetName) {
  this->streetName = streetName;
}

void Address::setCity(string city) {
  this->city = city;
}

void Address::setProvince(string province) {
  this->province = province;
}

// return as a string so it can be used in a cout
string Address::toString() const {
  ostringstream output;
  output << streetNumber 
  << " " << streetName 
  << ", Apt#" << aptNumber 
  << ", " << city 
  << ", " << province;
  return output.str();
}
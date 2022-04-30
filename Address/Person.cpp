#include "Person.h"

Person::Person(Address& addr, string firstName, string lastName): 
  addr{addr},
  firstName{firstName},
  lastName{lastName} {
}
  
void Person::displayPerson() {
  cout << "First name: " << this->firstName << endl;
  cout << "Last name: " <<  this->lastName << endl;
  cout << "Address: " << this->addr.toString() << endl;
}
#include <MITPerson.h>

using namespace Person;

MITPerson::MITPerson(std::string  const& _name, 
                     UID const& _uid,
                     Address const& _address)
{
  this->name = _name;
  this->uid = _uid;
  this->address = _address;
}

void MITPerson::display_profile() const
{
  std::cout << "-----------------------------\n";
  std::cout << "Dumping MITPerson profile" << std::endl;
  std::cout << ">> " << this->name << " (name)" << std::endl;
  std::cout << ">> " << this->uid << " (uid)" << std::endl;
  std::cout << ">> " << this->address << " (address)" << std::endl;
  std::cout << "-----------------------------\n";
}

void MITPerson::change_address(Address const& new_address)
{
  this->address = new_address;
}

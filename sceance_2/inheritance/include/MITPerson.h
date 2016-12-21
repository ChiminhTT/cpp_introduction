#pragma once

#include <iostream>
#include <string>

namespace Person
{
  using UID = uint32_t;
  using Address = std::string;

class MITPerson 
{
protected:
  std::string name;
  UID uid;
  Address address;

public:
  MITPerson(std::string const& _name, 
            UID const& _uid,
            Address const& _address);
  void display_profile() const;
  void change_address(Address const& new_address);
};

}

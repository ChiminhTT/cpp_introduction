#pragma once

#include <string>

namespace Person
{
class MITStudent;
}

namespace Class
{
using UID = uint32_t;

class Course
{
protected:
  UID uid;
  std::string name;

public:
  friend Person::MITStudent;
  Course(UID const& _uid, std::string const& _name);
};

}


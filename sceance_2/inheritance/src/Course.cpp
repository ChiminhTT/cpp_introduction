#include <Course.h>

using namespace Class;

Course::Course(UID const& _uid, std::string const& _name)
{
  this->uid =_uid;
  this->name = _name;
}

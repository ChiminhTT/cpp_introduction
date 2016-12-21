#pragma once

#include <vector>

#include <MITPerson.h>
#include <Course.h>

using uint = unsigned int;

class MITStudent: public Person::MITPerson
{
private:
  uint course_number = 0;
  std::vector<Class::Course> classes_taken;
  int year = 0;

public:
  MITStudent(std::string const& _name,
             Person::UID const&  _puid,
             Person::Address const& _address,
             uint const& _course_number,
             int const& _year);
  void add_class(Class::Course const& new_class);
  void display_profile() const; // Override
};

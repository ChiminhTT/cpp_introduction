#pragma once

#include <iostream>
#include <exception>

using uint = unsigned int;

class Date
{
private:
  uint day = 0;
  uint month = 0;
  uint year = 0;

public:
  Date(uint _day, uint _month, uint _year);
  void pretty_print() const;
};

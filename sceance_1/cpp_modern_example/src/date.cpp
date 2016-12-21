#include <date.h>

auto constexpr max_day = 31;
auto constexpr max_month = 12;

Date::Date(uint _day, uint _month, uint _year)
{
  // Guard statements
  if (_day > 31)
    throw std::out_of_range("Invalid day number");
  if (_month > 12)
    throw std::out_of_range("Invalid month number");

  // Assignations
  this->day = _day;
  this->month = _month;
  this->year = _year;
}

void Date::pretty_print() const
{
  std::cout << this->day << "/" << this->month << "/" << this->year << "\n";
}

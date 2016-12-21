#include <cstdio>

#include <date.h>

Date::Date(int _day, int _month, int _year)
{
  this->day = _day;
  this->month = _month;
  this->year = _year;
}

void Date::pretty_print()
{
  printf("%d/%d/%d\n", this->day, this->month, this->year);
}

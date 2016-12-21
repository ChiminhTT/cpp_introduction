#pragma once

class Date
{
private:
  int day;
  int month;
  int year;

public:
  Date(int _day, int _month, int _year);
  void pretty_print();
};

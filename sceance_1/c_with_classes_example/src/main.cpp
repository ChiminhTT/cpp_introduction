#include <date.h>

int main(int argc, char const *argv[])
{
  Date* date = new Date(5, 6, 1945);
  date->pretty_print();
  delete date;
  return 0;
}

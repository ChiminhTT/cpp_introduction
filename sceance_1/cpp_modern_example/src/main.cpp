#include <date.h>

int main(int argc, char const *argv[])
{
  try
  {
    auto const date = Date(12, 06, 1945);
    date.pretty_print();
  }
  catch(std::out_of_range const& e)
  {
    std::cout << e.what() << std::endl;
    std::cout << "Failed to construct date. Program is exiting..." << std::endl;
  }
  return 0;
}

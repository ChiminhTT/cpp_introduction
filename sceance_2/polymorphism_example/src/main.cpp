#include <iostream>

class B {};
class D1: public B {};
class D2: public B {};
class D3: public B {};

void process(D1* d1) 
{
  std::cout << "Processing intance of B" << std::endl; 
}
void process(D2* d2)
{
  std::cout << "Processing intance of B" << std::endl; 
}
void process(D3* d3)
{
  std::cout << "Processing intance of B" << std::endl; 
}

int main(int argc, char const *argv[])
{
  D1* derived_1 = new D1();
  D2* derived_2 = new D2();
  D3* derived_3 = new D3();

  process(derived_1);
  process(derived_2);
  process(derived_3);

  delete derived_1;
  delete derived_2;
  delete derived_3;
  return 0;
}


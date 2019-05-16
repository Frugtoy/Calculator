
#include<iostream>
#include"sort_machine.h"
using std::cin;
using std::cout;
using std::endl;
int main()
{
  SortingStation s;
  s.parse("5*2+(1^(3-2))");//52*132-^+          5*2+(1^3-2)---> 52*13^2-+      2*(2+2)^3 ---> 222+3^*
  return 0;
}
//A reference is an alias, or an alternate name to an existing variable.

#include <iostream>
using namespace std;

void swap(int& first,int& second)
{
  int temp = first;
  first = second;
  second =temp;
}

int main()
{
  int a = 2,b = 3;
  swap(a,b);

  std::cout << a << ' '<< b << '\n';

return 0;
}

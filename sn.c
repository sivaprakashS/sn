#include <string.h>
#include <iostream.h>
int main()
{
  string myString = "Hello World";
  for (std::size_t i = 0; i < myString.size(); ++i)
  {
      cout << bitset<8>(myString.c_str()[i]) << endl;
  }
}

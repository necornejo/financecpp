#include <iostream>
using namespace std;
double factorial( double number )
{
  if( number == 1)
  {
    return 1;
  }
  return number * factorial(number-1);
}

int main()
{
  double number;
  cout << "Ingresa un numero y te ayudare a sacar su factorial"<<endl;
  cin >> number;
  cout << factorial(number)<<endl;
}

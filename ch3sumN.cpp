/* El siguiente programa es una funcion recursiva para sumar n elementos*/
#include <iostream>
using namespace std;

int sum(int number)
{
  if(number==1)
  {
    return number;
  }
  return number+ sum(number-1);
}

int main()
{
  int number;
  cin >> number;
  cout << sum(number) << endl;
}

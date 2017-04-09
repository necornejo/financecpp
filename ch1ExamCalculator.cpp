#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int mark;
  cout << "What was your average mark ?" << endl;
  cin >> mark;
  if(mark >= 70)
  {
    cout << "Congratulations" << endl;
    cout << "You got a distinction." << endl;
  }
  else if (mark >= 60)
  {
    cout << "Well done !! " << endl;
    cout << "You got a merit " << endl;
  }
  else if (mark >=50)
  {
    cout << "You passed !! " << endl;
  }
  else
  {
    cout << "You failed" << endl;
  }
  return 0;
}

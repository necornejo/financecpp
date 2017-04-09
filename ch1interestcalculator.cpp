#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  //Interestrate coding starts
  int principal;
  double interest_rate;
  int number_of_years;

  cout << "How much are you investing?" << endl;
  cin >> principal;
  cout << "What is the annual interest rate (%) ?" << endl;
  cin >> interest_rate;
  cout << "How long for (years)?"<< endl;
  cin >> number_of_years;

  double finalbalance = pow(1.0 + interest_rate *0.01, number_of_years) * principal;
  double interest = finalbalance-principal;
  cout << "You will earn ...!" << endl;
  cout << interest << endl;
  //interestrate ending code
}

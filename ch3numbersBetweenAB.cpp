/* Este programa imprime los numeros entre un rango A y un B*/
#include <iostream>
using namespace std;

void between_a_b(int range_a , int range_b)
{
  if(range_a < range_b)
  {
    cout<< range_a << " ";
    between_a_b(range_a+1,range_b);
  }
}

int main()
{
  cout << "Inserte 2 numeros"<<endl;
  cout << "Inserte el Inicio"<< endl;
  int range_a; cin>>range_a;
  cout << "Inser el Fin" << endl;
  int range_b; cin>>range_b;
  cout<< "Los numeros entre" << range_a << " y " << range_b << "Son;" << endl;
  between_a_b(range_a,range_b);
}

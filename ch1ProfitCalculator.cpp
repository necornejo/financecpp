#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double revenue,
         gross_profit,
         costs,
         tax_rate;
  cout << "Ingresa los ingresos totales" << endl;
  cin >> revenue;
  cout << "Ingresa los costos totales" << endl;
  cin >> costs;
  gross_profit = revenue - costs;
  if(revenue > 0)
  {
    cout << "Tu ganancia fue de ..." << endl;
    cout << gross_profit << endl;
    cout << "Ingresa la tasa de impuesto ." << endl;
    cin >> tax_rate;
    tax_rate = tax_rate * 0.01;
    cout << "Los impuestos que tienes que pagar es " << endl;
    cout << revenue * gross_profit << endl;
  }
  else
  {
    cout << "Haz perdido " << endl;
    cout << gross_profit << endl;
    cout << "No tienes por que pagar impuestos " << endl;
  }
  return 0;
}

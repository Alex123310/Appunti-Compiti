#include <iostream>
#include TriangoloRettangolo.h

void Triangolorettangolo::area(float& a) 
{
  a = (cateto1 * cateto2) / 2;
}
float Triangolorettangolo::perimetro()
{
  return cateto1 + cateto2 + ipotenusa;
  
}
TriangoloRettangolo(float c1, float c2)
{
  cin >> c1;
  cin >> c2;
  ipotenusa = ;
}
~TriangoloRettangolo()
{
  cout << "Sono il distruttore" << endl;
}

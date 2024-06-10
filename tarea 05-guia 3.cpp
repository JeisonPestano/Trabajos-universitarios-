#include <iostream>
#include <cmath>
using namespace std;
int main(){
double diametro,radio,area;
cout<<"\ncual es el diametro de tu circulo: ";
cin>>diametro;
radio=diametro/2;
area=3.14*pow(radio,2);
cout<<"el area del circulo es: "<<area;

return 0;
}
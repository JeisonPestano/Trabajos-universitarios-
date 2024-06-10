#include <iostream>
using namespace std;
int main(){
int a,b,c,d;
cout<<"\ncuanto ganas la hora? $";
cin>>a;
cout<<"\ncuantas horas trabajas? ";
cin>>b;
c=a * b;
d=c * 5;
cout<<"\nsu salario semanal es de: $"<<d;
d=c * 15;
cout<<"\nsu salario quincenal es de: $"<<d;
d=c * 30;
cout<<"\nsu salario mensual es de: $"<<d;
return 0;
}


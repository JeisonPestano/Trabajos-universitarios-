#include <iostream>
using namespace std;
int main(){
float a,b,c,d,e;
float suma,volt;
 cout<<"\ningrese el primer voltaje: ";
 cin>>a;
 cout<<"\ningrese el segundo voltaje: ";
 cin>>b;
 cout<<"\ningrese el tercer voltaje: ";
 cin>>c;
 cout<<"\ningrese el cuarto voltaje: ";
 cin>>d;
 cout<<"\ningrese el quinto voltaje: ";
 cin>>e;
 suma=a+b+c+d+e;
 volt=suma/5;
 if(volt<220){
 cout<<"\nel voltaje es correcto!!  "<<volt;
 }
else{
 cout<<"\nel voltaje es incorrecto!!  "<<volt;
 }
return 0;
}
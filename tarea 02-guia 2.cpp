#include <iostream>
using namespace std;
int main(){
do{
float a,b,c,d;
system("cls");
cout<<"ingrese el primer digito ";
cin>>a;
cout<<"ingrese el segundo digito ";
cin>>b;
cout<<"ingrese el tercer digito ";
cin>>c;
d= a + b + c;
cout<<"el resultado de la suma es: "<<d;
d= a * b * c;
cout<<"\nel resultado de la multiplicación es: "<<d;
cout<<"\n";
system ("pause");
}while(true);
return 0;
}
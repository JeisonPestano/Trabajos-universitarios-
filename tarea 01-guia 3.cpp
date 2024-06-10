#include <iostream>
using namespace std;
int main(){
int a,descuento,neto;
cout<<"\ningrese su sueldo: ";
cin>>a;
if(a<=1000){
descuento= a *0.1;
neto=a-descuento;
cout<<"\nsu descuento es de: "<<descuento;
cout<<"\nsu sueldo neto es: "<<neto;
}
else if(a>1000 && a<=2000){
descuento=a*0.05;
neto=a-descuento;
cout<<"\nsu descuento es de: "<<descuento;
cout<<"\nsu suelto neto es: "<<neto;	
	}
else{
descuento=a*0.03;
neto=a-descuento;
cout<<"\nsu descuento es de: "<<descuento;
cout<<"\nsu suelto neto es: "<<neto;	
	}

	
			return 0;
	}
#include <iostream>
using namespace std;
int main(){
int a,descuento;
cout<<"\ningrese su sueldo: ";
cin>>a;
if(a>=10000){
descuento=a*0.2;
cout<<"\nsu descuento es de: "<<descuento;	
	}
else if(a<10000){ 
descuento=a*0.1;
cout<<"su descuento es de: "<<descuento;
	}
}
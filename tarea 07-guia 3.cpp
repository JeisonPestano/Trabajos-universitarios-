#include <iostream>
using namespace std;
int main(){
int a,b,c,d; 
 cout<<"\ningrese la primeta nota: ";
 cin>>a;
 cout<<"\ningrese la segunda nota: ";
 cin>>b;
 cout<<"\ningrese la tercera nota: ";
 cin>>c;
 d=(a+b+c)/3;
 if(d>7){
 cout<<"Aprobado!!";
 }
else if(d<=7) {
 cout<<"Mejore la nota!!";
 }
return 0;
}
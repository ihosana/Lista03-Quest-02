#include <iostream>

using namespace std;

int main(){
int numero, numero2, numero3, quadrado ,numero4,cubo,quadrado2, quadrado3,quadrado4,  cubo2, cubo3, cubo4, calculo;
string valor="";
for(int cont=1; cont<=3; cont++){
  numero=0;
  cout<<"Digite o numero "<<cont<<endl;
  cin>>numero;
  while(numero<0){
   cout<<"Digite o numero"<<cont<<"novamente"<<endl;
  }
  for(int i=1; i<=3; i++){
   quadrado=0;
   cubo=0;
   quadrado=(numero* numero);
   cubo=(numero* numero*numero);
  }
 

}
 
cout<<"Valor lido | Seu quadrado | Seu cubo  "<<endl;
cout<<"\n------------------------------------"<<endl;
cout<<" "<<numero;
cout<<"               "<<quadrado1;
cout<<"              "<<cubo1;
cout<<"\n------------------------------------"<<endl;
cout<<" "<<numero;
cout<<"               "<<quadrado2;
cout<<"              "<<cubo2;
cout<<"\n--------------------------------------"<<endl;
cout<<" "<<numero;
cout<<"                "<<quadrado3;
cout<<"             "<<cubo3;
cout<<"\n-------------------------------------"<<endl;
cout<<" "<<numero;
cout<<"               "<<quadrado4;
cout<<"             "<<cubo4;
}

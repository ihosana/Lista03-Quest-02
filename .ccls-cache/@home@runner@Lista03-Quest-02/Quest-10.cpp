#include <iostream>

using namespace std;

int main(){
int numero1, numero2, numero3, cont, quadrado1 ,numero4,cubo1,quadrado2, quadrado3,quadrado4,  cubo2, cubo3, cubo4, calculo;
	
cout<<"Digite o primeiro numero "<<endl;
cin>>numero1;
 while(numero1<0){
	 cout<<"Digite novamente o priemiro numero "<<endl;
     cin>>numero1;
   }
 cout<<"Digite o segundo numero "<<endl;
 cin>>numero2;
 while(numero2<0){
  	 cout<<"Digite novamente o segundo numero "<<endl;
     cin>>numero2;
   }
 cout<<"Digite o terceiro numero "<<endl;
 cin>>numero3;
 while(numero3<0){
	 cout<<"Digite novamente o terceiro numero "<<endl;
     cin>>numero3;
   }

 cout<<"Digite o quarto numero "<<endl;
 cin>>numero4;
 while(numero4<0){
	 cout<<"Digite novamente o numero "<<endl;
     cin>>numero4;
   }


quadrado1=(numero1* numero1);
cubo1=(numero1* numero1*numero1);

quadrado2=(numero2* numero2);
cubo2=(numero2* numero2*numero2);

quadrado3=(numero3* numero3);
cubo3=(numero3* numero3*numero3);

quadrado4=(numero4* numero4);
cubo4=(numero4* numero4*numero4);

cout<<"Valor lido | Seu quadrado | Seu cubo  "<<endl;
cout<<"\n------------------------------------"<<endl;
cout<<" "<<numero1;
cout<<"               "<<quadrado1;
cout<<"              "<<cubo1;
cout<<"\n------------------------------------"<<endl;
cout<<" "<<numero2;
cout<<"               "<<quadrado2;
cout<<"              "<<cubo2;
cout<<"\n--------------------------------------"<<endl;
cout<<" "<<numero3;
cout<<"                "<<quadrado3;
cout<<"             "<<cubo3;
cout<<"\n-------------------------------------"<<endl;
cout<<" "<<numero4;
cout<<"               "<<quadrado4;
cout<<"             "<<cubo4;
}

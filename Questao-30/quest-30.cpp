#include <iostream>
using namespace std;

int main(){
 int numero1, numero2, numero3, numero4, numero5 , cont;
 
  cout<<"Digite o 1°numero"<<endl;
  cin>>numero1;
   cout<<"Digite o 2°numero"<<endl;
  cin>>numero2;
   cout<<"Digite o 3°numero"<<endl;
  cin>>numero3;
   cout<<"Digite o 4°numero"<<endl;
  cin>>numero4;
   cout<<"Digite o 5°numero"<<endl;
  cin>>numero5;
  
  if(numero1==numero2|| numero2==numero1|| numero1== numero3||numero3== numero1 ||numero1== 
  numero4||numero4==numero1|| numero1== numero5||numero5==numero1 )
  {
   cout<<"👗A moda:"<<numero1;
  }
  if(numero2==numero3|| numero3==numero2|| numero2== numero4||numero4== numero2 ||numero2== 
    numero5||numero5==numero2)
  {
    cout<<"👗A moda:"<<numero2;
  }
  if(numero3==numero4|| numero4==numero3|| numero3== numero5||numero5== numero3)
  {
    cout<<"👗A moda:"<<numero3;
  }
  if(numero4==numero5|| numero5==numero4)
  {
    cout<<"👗A moda:"<<numero4;
  }
  cout<<"  A mediana:"<<numero3;
}
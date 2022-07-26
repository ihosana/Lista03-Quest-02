/*Escreva um algoritmo leia dois números, A e B, verifique e escreva se são primos entre si. Considere que 
dois números inteiros são ditos primos entre si se não existir divisor comum aos dois números. Caso não 
sejam digitados valores positivos, o algoritmo deve solicitar que o usuário digite novamente até que esta 
condição seja satisfeita.
*/
#include <iostream>
using namespace std;
int main(){
 int numero1, numero2, result;
 
  cout<<"Digite o 1°numero: "<<endl;
  cin>>numero1;
  cout<<"Digite o 2°numero: "<<endl;
  cin>>numero2; 
  result=numero1%numero2;

  if(result !=0){
  cout<<"Numeros primos✅ :"<<result;
  }
  else{
     cout<<"Numeros NÃO primos❌ "<<endl;
  }
  
}

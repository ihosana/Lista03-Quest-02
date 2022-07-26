#include<iostream>
using namespace std;
int main(){
 int numero, cont, quadrangular, q2, quadrado,contar, quadran=1;
  cout<<"Difite um número inteiro"<<endl;
  cin>>numero;
  if(numero<=0){
    cout<<"OBS: esses são os numeros quadrangulares "<<endl;
    for(contar=1; contar<=10; contar++){
     if(cont>1){
       quadrangular= quadrangular+1;
       q2= quadrangular* quadrangular;
       cout<<" "<<q2<<",";
      }
      else{
       quadrangular= quadran+quadrangular;
       q2= quadrangular* quadrangular;
       cout<<" "<<q2<<",";
      }
    }
  }
  else{
    for(cont=1; cont<=10; cont++){
     if(numero>1 && cont>1){
       quadrangular= quadrangular+1;
       q2= quadrangular* quadrangular;
       cout<<" "<<q2<<",";
      }
     else{
       quadrangular= numero+quadrangular;
       q2= quadrangular* quadrangular;
       cout<<" "<<q2<<",";
      }
    }
  }
}
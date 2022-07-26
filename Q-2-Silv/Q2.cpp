#include <iostream>

using namespace std;

int main(){
 int cont, Qmotorista, cartmotorista, multas, contmultas, maiorcod; 
 float valormultas, soma, soma2, maiorvalor; 
  
  cout<<"Qnt motorista"<<endl;
  cin>>Qmotorista;
  for(cont=1; cont<=Qmotorista; cont++){
    cout<<"O codigo:"<<endl;
    cin>>cartmotorista;
    cout<<"Insira o n° de multas "<<endl;
    for(contmultas=1; contmultas<=multas; contmultas++){
      cout<<" qual o valor da multa: "<<endl;
      cin>>valormultas;
      if(contmultas==1){
        soma=valormultas;
        
      }else{
        soma=soma+ valormultas;
      }
    }
    cout<<"Divida: "<<cartmotorista<<" foi de "<<soma;
    if(cont==1){
      soma2=soma;
      
    }else{
      soma2=soma2+soma;
    }
    if(cont==1){
      maiorvalor=soma;
      maiorcod=cartmotorista;
    }else{
      if(soma>maiorvalor){
        maiorvalor=soma;
        maiorcod=cartmotorista;
      }
    }
  }
  cout<<"A soma total: "<<soma2;
  cout<<"A maior divida: "<<maiorcod;
}
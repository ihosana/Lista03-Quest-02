/*Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de sexo (m=masculino, 
f=feminino) e altura de cada pessoa. Faça um programa que leia os dados de várias pessoas diferentes e 
informe:
- A altura da mulher mais baixa;
- A média de altura dos homens;
- A média de altura da população.
O algoritmo deve encerrar quando for digitado o valor “X” para altura*/
#include <iostream>

using namespace std;

int main(){
  float altura, word, altura_people, media_altura,altura_baixa=0,altura_menor=0;
  char sexo, opicion;
 do{
  cout<<"Insira sua altura"<<endl;
  cin>>altura;
  cout<<"Insira seu sexo F/M"<<endl;
  cin>>sexo;
   if(sexo == 'F'){
     if(altura<altura_menor){
       altura_menor= altura;
     }
   }
  word+= word ;
  altura_people+= altura; 
   cin>>opicion;
   
 media_altura=altura_people/word;
   }
   while(altura=='x');{
   
  cout<<"\nPessoas ao todo: "<<word;
  //cout<<"\nA altura da mulher mais baixa: "<<altura_menor;
  cout<<"\nA media de altura da POPULAÇÃO: "<<altura_people;
  //cout<<"A média da altura dos homens: "<<endl;
  }

 
  
}

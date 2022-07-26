#include<iostream>
using namespace std;
int main(){
 int voto, candidato1=0, candidato2=0, candidato3=0, candidato4=0, candidato5=0,total_votos, maior_voto=0,total1, total2, total_porcento1, total_porcento2, total_porcento3;
  /*---------- TABELA DE ELEIÇÃO------------*/
  cout<<"----------------"<<endl;
  cout<<"  MENU ELEIÇÃO  "<<endl;
  cout<<"----------------"<<endl;
  cout<<"0- Finalizar"<<endl;
  cout<<"1- Candidato1"<<endl;
  cout<<"2- Candidato2"<<endl;
  cout<<"3- Candidato3"<<endl;
  cout<<"4- Candidato4"<<endl;
  cout<<"5- Candidato5"<<endl;
  cout<<"---------------"<<endl;
  /*---------INICIALIZAÇÃO------------*/
 do{
   cout<<"Digite seu voto"<<endl;
   cin>>voto;
   /*---INICIO DA VERIFICAÇÃO DO VOTO DIFERENTE DE 0, 1,, 2, 3, 4 e 5----*/
    while(voto>5 || voto<0){
         cout<<"Digite o voto NOVAMENTE"<<endl;
         cin>>voto;
    }
   /*- SELEÇÃO DOS CANDIDATOS E SEUS RESPECTIVOS VOTOS------------*/
    switch(voto){
     case 1:
     candidato1 = candidato1+1 ;
     break;
     case 2:
     candidato2 = candidato2 + 1;
     break;
     case 3:
     candidato3 = candidato3+1 ;
     break;
     case 4:
     candidato4 = candidato4+1;
     break;
     case 5:
      candidato5 = candidato5+1;
     break;
    }
    cout<<"PROXIMO usuário"<<endl;
    total_votos= candidato1 + candidato2+ candidato3+ candidato4+ candidato5;
    total_porcento1=((100*candidato1)/total_votos);
    total_porcento2=((100*candidato2)/total_votos);
    total_porcento3=((100*candidato3)/total_votos);
  }while(voto!= 0);{
   cout<<"\n------------------";
   cout<<"\n⚠ VOTAÇÃO ENCERRADA"<<endl;
   cout<<"------------------";
   /*VERIFICAÇÃO DE QUAL CANDIDATO ATINGIU MAIS QUE 50% DOS VOTOS---*/
   if(total_porcento1>50){
     cout<<"\n😜O Candidato1 é o VENCEDOR  "<<endl;
   }
  if(total_porcento2>50){
      cout<<"\n😎 O Candidato2 é o VENCEDOR  "<<endl;
   }
     if(total_porcento3>50){
      cout<<"\n🤩 O Candidato3 é o VENCEDOR  "<<endl;
   }
   cout<<"\n📌TOTAL de VOTOS: "<<total_votos<<" Votos";
   cout<<"\n😜Total de votos do 1° candidato: "<<candidato1;
   cout<<"\n😎Total de votos do 2° candidato: "<<candidato2;
   cout<<"\n🤩Total de votos do 3° candidato: "<<candidato3;
   cout<<"\n😐Voto em BRANCO : "<<candidato4;
   cout<<"\n😶Voto NULO: "<<candidato5;
   }
}
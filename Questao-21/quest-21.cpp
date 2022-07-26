/* Escreva um algoritmo que auxilie o controle de entradas de um museu, dependendo da idade do 
visitante. Considere que:
- Crianças com idade < 6 anos não pagam. 
- Crianças de 6 a 12 anos pagam 30%. 
- De 13 a 18 anos, e acima de 60 anos, pagam 50%. 
- Os demais pagam 100%. 
O algoritmo deve ler, inicialmente, o preço da entrada para aquele dia (sem desconto). Em seguida deve 
solicitar a idade do visitante e informar o valor que ele deverá pagar. O algoritmo deve parar de solicitar 
a idade do visitante quando for digitado 0 para a idade. Ao final, o algoritmo deverá escrever dois totais: 
o total de dinheiro arrecadado e o total de desconto concedido pelo museu naquele dia.*/
#include <iostream>
using namespace std;
int main(){
  float preco_entrada, idade, valor_pagar, dinheiro_arrecadado, total_desconto, total, desconto2, desconto3;
 do{
   cout<<"\ninforme o preço da entrada:"<<endl;
   cin>>preco_entrada;
   cout<<"\nInforme a idade"<<endl;
   cin>>idade;
   if(idade<6 && idade>=1){
      cout<<"\nNão precisa pagar"<<endl;
    }
   else{
     if(idade==6 && idade <=12){
       valor_pagar=((preco_entrada*30)/100);
       cout<<"\nPreço com desconto é R$"<<valor_pagar;
       dinheiro_arrecadado+= valor_pagar;
      
      }
    }
    if(idade >=13 && idade<=18 || idade>60){
     valor_pagar=((preco_entrada*50)/100);
     cout<<"\nPreço com desconto é R$"<<valor_pagar;
     dinheiro_arrecadado+= valor_pagar;
       
    }  
    else{
     if(idade>18 ){ 
       valor_pagar=((preco_entrada*100)/100);
       cout<<"\nPreço inalterável é R$"<<valor_pagar;
       dinheiro_arrecadado+= valor_pagar;
      }
    }
   if(idade<=0){
     cout<<"FIM"<<endl;
   }
   total_desconto+= +1;
  }
 while(idade!=0);{
   cout<<"\n 🤑TOTAL arrecadado:R$ "<<dinheiro_arrecadado;
   cout<<"\n 💰Total de DESCONTO: "<<total_desconto;
 }
}
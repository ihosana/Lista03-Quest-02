/*Uma loja tem, para cada um dos seus 10 funcionários, uma ficha contendo a identidade, o número de
horas trabalhadas e a quantidade de dependentes do mesmo. Considerando que:
a) A empresa paga 12 reais por hora e 40 reais por dependentes (salário bruto).
b) Sobre o salário bruto são feitos descontos de 8,5% para o INSS e 5% para o IR (salário líquido).
Elabore um algoritmo que leia os dados de todos os funcionários, calcule e escreva os salários bruto
(total) e líquido (total – descontos) de cada funcionário e a identidade de todos os funcionários com mais
de 3 dependentes.*/

#include<iostream>
using namespace std;
int main(){
  int identidade, por_hora, por_dependente, maior_dependente=0, 
  n_horas_trabalhadas, qnt_dependente, cont, identidade_maior;
  float salario_bruto, salario_liquido;
  for(cont=1; cont<=10; cont++){
    
    por_dependente=0; 
    salario_bruto=0;
    salario_liquido=0;
    por_hora=0;
    cout<<"\n😃Digite o n° de sua identidade: "<<endl;
    cin>>identidade;
    cout<<"⌚Digite o n° de horas trabalhadas"<<endl;
    cin>>n_horas_trabalhadas;   
    cout<<"👨‍👩‍👧‍👦Digite a qnt de dependente"<<endl;
    cin>>qnt_dependente;
    if(qnt_dependente> maior_dependente){
      maior_dependente=qnt_dependente;
      identidade_maior= identidade;
    }
    por_hora=(12* n_horas_trabalhadas);
    por_dependente=(40*qnt_dependente);
    salario_bruto=(por_hora+ por_dependente);
    salario_liquido=((salario_bruto * 9.0)/100);
    cout<<"🤑O salario bruto é R$ "<<salario_bruto<<endl;
    cout<<"💰O salario liquido é R$ "<<salario_liquido<<endl;
    
  }
  cout<<"\n😲A maior qnt de dependentes foi "<<maior_dependente<<"\ncom a 
  identidade "<<identidade_maior<<endl;
  
}
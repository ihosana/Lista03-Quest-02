#include <iostream>
using namespace std;
int main(){
  //CRIAÇÃO DE VARIÁVEIS
	int n_carteira, n_carteira_alta, n_multa, n_motorista,contar;	
  float valor_multa;
	int somatorio1, somatorio2, total, con, valor_total,todas;
  int  multa_alta=0;

  //A qnt de MOTORISTAS
  cout<<"Quantos motoristas?"<<endl;
  cin>>n_motorista;
    //PARA CADA MOTORISTA
  for( int cont = 0; cont < n_motorista; cont++ )  
	{
		n_carteira=0;
		n_multa=0;
		valor_total=0;
    cout<<"Digite o numero da carteira do motorista"<<endl;
    cin>>n_carteira;
    cout<<"Digite o numero de multas que ce tem"<<endl;
    cin>>n_multa;
    //DESCOBRIMENTO DA MAIOR MULTA E SUA CARTEIRA
    if(n_multa> multa_alta)
		{
     multa_alta= n_multa;
     n_carteira_alta= n_carteira;
	  }
    //CONTAGEM DA QNT DE CARTEIRA
	  for(int contagem = 0; contagem < n_multa; contagem++)
	  {
	   valor_multa=0;
     cout<<"Valor da multa"<<endl;
     cin>>valor_multa; 
      //VALOR TOTAL DA DIVIDA
	    valor_total= valor_multa + valor_total;  
		} 
		cout<<"Valor divida: R$ "<< cont <<":" <<valor_total<<endl;
		todas= todas + valor_total;
	}
  //PRINTA NA TELA O RESULTADO
	cout<<"\n A maior multa: "<<multa_alta;
	cout<<"\n A recardacao ao todo :R$ "<<todas;
	cout<<"\n numero da carteira do motorista com maior multa: "<<n_carteira_alta;
}
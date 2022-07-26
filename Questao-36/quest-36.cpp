#include<iostream>
using namespace std;
int main(){
 int qnt_alunos,qnt_alunos_acima,porcentagem_aliment,renda_maior, 
 porcentagem_despesas,porcentagem;
 float  pessoal, renda_familiar, gasto_alimento, gasto_outros, somaFeP;
  do{
   cout<<"Digite a Renda familiar:"<<endl;
    cin>>renda_familiar;
    cout<<"Digite o total de gasto com alimentação:"<<endl;
    cin>>gasto_alimento;
    cout<<"Digite o total de gasto com outras despesas:"<<endl;
    cin>>gasto_outros;  
    cout<<"Digite a Renda pessoal:"<<endl;
    cin>>pessoal;
   /*PORCENTAGEM GASTA EM ALIMENTAÇÃO E OUTRAS DESPESAS*/
    somaFeP=(renda_familiar+ pessoal);
    porcentagem_aliment=((gasto_alimento*100)/somaFeP);
    porcentagem_despesas=((gasto_outros*100)/somaFeP);
    cout<<"\nPorcentagem gasta de alimentação:"<<porcentagem_aliment<<"%";
    cout<<"\nPorcentagem gasta com outras despesas:" 
   <<porcentagem_despesas<<"%";
    cout<<"\nPROXIMO"<<endl;
    /*ALUNOS COM RENDA PESSOAL MAIOR QUE A RENDA FAMILIAR */
    if(pessoal> renda_familiar){
      renda_maior= renda_maior + 1;      
    }
    /*ALUNOS QUE GASTAM MAIS DE R$200*/
    qnt_alunos=qnt_alunos + 1;
    if(gasto_outros>200){
     qnt_alunos_acima= qnt_alunos_acima + 1;
    }
    porcentagem=((qnt_alunos_acima*100)/qnt_alunos);
  }while( pessoal!=0 );{
   cout<<"ENCERRADO "<<endl;
   cout<<"\nQuantidade de ALUNOS: "<<qnt_alunos<<" alunos";
   cout<<"\nAlunos que gastam acima de R$200😶: "<<porcentagem<<"%";
   cout<<"\nAlunos com renda pessoal maior que a familiar: "<<renda_maior<<" aluno";
  }
}
#include <iostream>
using namespace std;
int main(){
int qnt_aluno, matricula, alunosAPV;
float media_aluno;
  cout<<"Digite quantos são"<<endl;
  cin>>qnt_aluno;
/* PEGANDO AS INFORMAÇÕES DE CADA ALUNOS*/
  for(int cont=0; cont < qnt_aluno; cont++){
    cout<<"Digite a matrícula"<<endl;
    cin>>matricula;
    cout<<"Digite a média"<<endl;
    cin>>media_aluno;
    if(media_aluno<0){
      cout<<"media invalida"<<endl;
    }
  }
  /*INFORMAR SE ALUNO ESTAR APV OU NÃO*/
  for(int alunos=0; alunos<qnt_aluno; alunos++){
    if(media_aluno>=7){
      alunosAPV = media_aluno + alunosAPV;
      cout<<"APV"<<alunosAPV<<endl;
    }
    if(media_aluno>0 && media_aluno<=3){
      cout<<"PT"<<alunos<<endl;
    }
    if(media_aluno>3 && media_aluno>7){
      cout<<"REC"<<alunos<<endl;
    }
    if(media_aluno>=9){
       cout<<"matricula"<<alunos<<matricula<<endl;
    
    }
  }
  
}
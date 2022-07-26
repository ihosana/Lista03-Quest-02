/*Elabore um algoritmo que implemente uma calculadora real: o usuário digita um número, depois a
operação (+, -, *, /), outro número, outra operação, outro número, e assim continua até que ele digite
enfim o sinal “=”, quando então a calculadora mostra o resultado. Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 +
4 = 6. O algoritmo deve resolver a expressão na ordem de digitação*/
    // if(operacion=='+'){
    //    resolucion= numero + resolucion  ; 
    // }
   
    // if(operacion=='-'){
    //      resolucion= numero - resolucion  ; 
    //   }
    //  if(operacion=='*'){
    //      resolucion= numero * resolucion  ; 
    //   }
    //     if(operacion=='/'){
    //      resolucion= numero / resolucion  ; 
/*
int main(){

    float num, resultado;
    char op;
    bool vez1 = true;

    do{
        cout << "\nDigite um numero:";
        cin >> num;
        if(vez1){ 
            resultado = num;
            vez1 = false;
        }else{
            switch(op){
                case '+': resultado = resultado + num;
                break;
                case '-': resultado = resultado - num;
                break;
                case '*': resultado = resultado * num;
                break;
                case '/': 
                while(num==0){
                    cout << "\nNao eh possivel divisao por 0, digite outro numero: ";
                    cin >> num;
                }
                resultado = resultado / num;
                break;
            }
             
        }
        cout << "\nDigite a operacao (+, -, *, /):";
        cin >> op;
          
    }while(op!='=');

    cout << "\n\nResultado = " << resultado; 

    cout << "\n";
    system("PAUSE");
}*/
#include<iostream>

using namespace std;

int main(){
  float numero, resolucion, calculo;
  char operacion;
  bool verifica=true;

  do{
    cout<<"Digite o numero"<<endl;
    cin>>numero;
    // if(verifica){
    //   resolucion=numero;
    //   verifica=false;
    // }
    // else{
        switch(operacion){
      case '+':
        resolucion= resolucion-numero  ;  
      break;
      case '-':
         resolucion=  resolucion-numero   ; 
      break;
      case '*':
         resolucion= resolucion* numero  ; 
      break;
      case '/':
         resolucion= resolucion/numero  ; 
      break;
    }
    
    cout<<"Digite a operação"<<endl;
    cin>>operacion;

      
  
  }while(operacion!= '=');
  cout<<"calculo: "<<resolucion;
}
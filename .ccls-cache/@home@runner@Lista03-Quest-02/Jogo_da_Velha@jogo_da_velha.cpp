 /*
Implementar o jogo da velha
*/

#include<iostream>
using namespace std;
int main(){
    int cont=1, linha, coluna, casa, casa1=0 ,casa2=0, casa3=0, casa4=0, casa5=0, casa6=0, casa7=0, casa8=0, casa9=0;
    bool alguemGanhou = false;
    char jogador = 'X', c1, c2, c3, c4, c5, c6, c7, c8, c9;
    c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = '-';
    // mostrar o tabuleiro inicial
    cout << "\n\tC1     C2      C3";
    cout << "\n\tC4     C5      C6";
    cout << "\n\tC7     C8      C9";

    do{
        //pedir a jogada
        cout << "\n\nJogador " << jogador << " faca sua jogada";
        do{
          cout << "\nDigite a casa desejada: ";
          cin >> casa;
        }while((casa<1)||(casa>9));
        //executar a jogada
    
        switch(casa){
            case 1: c1 = jogador;
               casa1+= casa;
               cout<<" "<<casa1;
              if(jogador =='X' || jogador=='O'){
                c1=jogador;
              }
              else{
                  do{
                   cout<<"\n ⚠ A CASA ESTÁ OCUPADA";
                   cout<<"\nDigite novamente"<<endl;  
                   cin>>casa;
                  }while (casa == 1 ) ;
                
              }
              break;
              case 2: c2 = jogador;
               casa2+=1 ;
              cout<<" "<<casa2;
          
              break;
              case 3: c3 = jogador;
              casa3+=1;
              cout<<" "<<casa3;
              break;
            case 4: c4 = jogador;
               casa4+=1;
              cout<<" "<<casa4;
            break;
            case 5: c5 = jogador;
                 casa5+=1;
              cout<<" "<<casa5;
            break;
            case 6: c6 = jogador;
              casa6+=1;
              cout<<" "<<casa6;             
            break;
            case 7: c7 = jogador;
              casa7+=1;
              cout<<" "<<casa7;
              
            break;
            case 8: c8 = jogador;
               casa8+=1;
              cout<<" "<<casa8;
              
            break;
            case 9: c9 = jogador;
                  casa9+=1;
              cout<<" "<<casa9;
            break;
     
        }
              
       // if(casa1==1 || casa2==1 || casa3==1){
       //          cout<<"Boa jogada ";
       //        } 
       //         else{
       //           do{
       //             cout<<"\n ⚠ A CASA ESTÁ OCUPADA";
       //             cout<<"\nDigite novamente"<<endl;  
       //             cin>>casa;
       //            }while (casa == 1 ) ;
                
       //       }

          //     if(casa2 != 1){
              //   cout<<"pessima jogada"<<endl;
              //    do{
              //      cout<<"\n ⚠ A CASA ESTÁ OCUPADA";
              //      cout<<"\nDigite novamente"<<endl;  
              //      cin>>casa;
              //     }while (casa == 2);
              // }
    
        //escrever o tabuleiro
        cout << "\n\t" << c1 << "\t" << c2 << "\t" << c3;
        cout << "\n\t" << c4 << "\t" << c5 << "\t" << c6;
        cout << "\n\t" << c7 << "\t" << c8 << "\t" << c9;
        
        // se é maior ou igual a 5a rodada
            //ver se alguem ganhou 
        
        cont++; //anda a rodada
        //muda o jogador
        if(jogador == 'X'){
            jogador = 'O';
        }else{
            jogador = 'X';
        }
    }while((cont<=9)&&(!alguemGanhou));


    cout << "\n\n";
}








 /*      if( jogador=='X' && casa ==1){
                 do{
                 cout<<"\n ⚠ A CASA ESTÁ OCUPADA";
                 cout<<"\nDigite novamente"<<endl;  
                 cin>>casa;
               
               }while(casa == casa1);
            
                }
              else{
                cout<<"otima jogada!";
              }*/
  // case 1: c1 = jogador;
  //             casa1= casa1+casa;
  //             cout<<" "<<casa1;
         
  //              if(casa1==1){
  //               cout<<"Boa jogada ";
  //             } 
  //              else{
  //                do{
  //                  cout<<"\n ⚠ A CASA ESTÁ OCUPADA";
  //                  cout<<"\nDigite novamente"<<endl;  
  //                  cin>>casa;
  //                 }while (casa == 1);
  //                switch(casa){
  //                   case 2: c2 = jogador;
  //                   casa2= casa2+ casa;
  //                   cout<<" "<<casa2;
  //                  break;
  //                 case 3: c3 = jogador;
  //                 casa3= casa;
  //                break;
                   
  //                }
  //            }
  //          break;
    
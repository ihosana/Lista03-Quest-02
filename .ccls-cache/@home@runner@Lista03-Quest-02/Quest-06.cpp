#include <iostream>

using namespace std;

int main(){
 int numero, cont ;
 for(cont = 1; cont <= 3; cont++ )
	{
   cout<<"Qual o numero??"<<endl;
   cin>>numero;
	 if(numero < 2){
	   cout<<"e maior"<<endl;
	  }
	 if(numero > 2)
	  {
	   cout<<"e menor"<<endl;
 	  }
    if(cont ==1 && numero == 2)
    {
	   cout<<"acertou"<<endl;
	  }
	  if(cont == 2 && numero== 2)
    {
	   cout<<"acertou"<<endl;
	  }
	   if(cont == 3 && numero== 2){
	     cout<<"acertou"<<endl;
	   }
	 
	}
	
}
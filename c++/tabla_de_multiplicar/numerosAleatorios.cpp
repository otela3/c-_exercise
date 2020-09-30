#include <iostream>
#include <time.h>

using namespace std;
int main(){

    int a,x,b;
    srand(time(NULL));
    x = rand()%101;
    cout<<"----encuentra el numero----"<<"\n";
    cout<<"1- iniciar juego"<<"\n";
    cout<<"2.- para salir cualquier tecla"<<"\n";
    cout<<"----encuentra el numero----"<<"\n";
    cin>>a;

cout<<x<<"\n";

   if (a==1){
    
         cout<<"----encuentra el numero----"<<"\n";
         do
         {
            cout<<"suerte para la proxima jeje"<<"\n";
            cin>>b;
         } while (x!=b);
         cout<<"has acertado"<<"\n";
   
   }else{
        return 0;
    }
    
    
    
}
    


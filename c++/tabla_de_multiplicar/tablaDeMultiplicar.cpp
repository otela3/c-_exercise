#include <iostream>


int main(){
    using namespace std;

    int a,ans;
    cout<<"ingresa un numero del 1 al 10: \n";
    cin>>a;
    if (a<=10&&a>0){
    for (size_t i = 1; i <= 10; i++)
    {
        ans = a*i;
        cout<<a<<"*"<<i<<"="<<ans;
        cout<<"\n";
    }
    
    

    }
    else{
        cout<<"debe ser de 1 a 10 \n";
    }
    
    
    return 0;


}
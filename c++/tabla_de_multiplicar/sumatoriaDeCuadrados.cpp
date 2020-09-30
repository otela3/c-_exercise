#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b=0;
    
    for (int i = 1; i <= 10; i++){
       
        a=pow(i,2);
        b=b+a;
        
    }

    cout<<b<<"\n";

        return 0;
    
    
}
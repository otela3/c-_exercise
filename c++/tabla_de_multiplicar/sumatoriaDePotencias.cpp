#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,ans,ans1=0;
    cin>>n;
    if (n>0) {
    
    for (int i = 0; i <= n; i++){
       
        ans=pow(2,i);
        ans1=ans+ans1;
    
        
    }

    cout<<ans1<<"\n";

        return 0;
    
    
}
}
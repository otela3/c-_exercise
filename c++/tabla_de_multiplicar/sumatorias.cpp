#include <iostream>

using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    if (n>0) {
    
    for (int i = 0; i <= n; i++){
        ans=i+ans;
    }
    cout<<ans<<"\n";
    }

}
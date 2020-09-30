#include <iostream>

using namespace std;
int main(){
   int a,b=1,c=0,ans=0;
    cin>>a;
for (int i = 1; i <= a; i++){
    ans=c;
    c=b+c;
    b=ans;
    cout<<b<<"\n";
}


    return 0;

}
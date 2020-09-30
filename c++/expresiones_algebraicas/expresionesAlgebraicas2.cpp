#include <iostream>

int main(){
    float a,b,c,d,e,f;
    float ans;
std::cout<<"ingresa a, b, c, d, e, f";    
std::cin>>a>>b>>c>>d>>e>>f;
    ans = ((b/c)+a)/((e/f)+d);
std::cout<<ans;
system("pause");
return 0;
}
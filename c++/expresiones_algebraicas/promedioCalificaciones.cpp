#include <iostream>

int main(){
    using namespace std;
    float practicas,participacion,examenes,ans;
    cout<<"calificacion practicas: "; cin>>practicas;
    cout<<"calificacion participacion: "; cin>>participacion;
    cout<<"calificacion examen: "; cin>>examenes;

    practicas*=0.40;
    participacion*=0.20;
    examenes*=0.40;
    ans = practicas+participacion+examenes;
    cout<<"/n tu calificaion es: "<<ans<<"\n";
    return 0;
}
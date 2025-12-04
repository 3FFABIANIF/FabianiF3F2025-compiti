#include <iostream>
using namespace std;
int main() {
int età;
cout << "Inserisci la tua età: ";
cin >> età;
if (età<14) {
    cout << "non puoi guidare" << endl;
}
else {
    cout<<"puoi guidare :" << endl;

    cout << "lo scooter con cilindrata di 50cc" << endl;
}
if (età>=16) {
    cout << "la moto fino a 125 cc" << endl;
}
if (età>=18) {
    cout<<"le auto fino a 95 cavalli" << endl;
   
}
if (età>=21) {
    cout<<" qualsiasi auto e moto senza limitazioni "<< endl;
  
   
}
return 0;
}

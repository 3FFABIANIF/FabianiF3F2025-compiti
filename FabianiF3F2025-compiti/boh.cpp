# include <iostream>

using namespace std;

void voti (int votitot,int voti1,int &suff,int &insuff) {
  int arr[votitot];
  
    
    for (int i=0; i<votitot-1; i++) {
        cin >> arr[i];
    }
    
    for (int i=votitot-1; i>=0; i--) {
        
        if (arr[i] <6) {
           
            insuff++;
        }
        else if (arr[i] >=6 ) {
           
            suff++; 
        }
    }
}
int main () {
    int votitot;
    int voti1;
    cout << "inserisci il numero di voti totali" << endl;
    cin >> votitot;
    cout << "inserisci i voti" << endl;
    cin >> voti1;
    
    int suff = 0;
    int insuff = 0;
    voti(votitot,voti1,suff,insuff);
    
    cout << "voti sufficienti: " << suff << endl;
    cout << "voti insufficienti: " << insuff << endl;
    
}

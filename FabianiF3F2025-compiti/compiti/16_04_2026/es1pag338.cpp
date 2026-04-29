#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int matrice[10][10];
    int contatoreZeri=0;
    srand(time(0));
    for (int i=0;i<10;i++){
       for(int b=0;b<10;b++){
        matrice[i][b]=rand()%10;
        
    }

}
for(int i=0;i<10;i++){
       for(int b=0;b<10;b++){
        cout<<matrice[i][b]<<" ";
        if(matrice[i][b]==0){
            contatoreZeri++;
        }
    }
    cout<<endl;
}
}
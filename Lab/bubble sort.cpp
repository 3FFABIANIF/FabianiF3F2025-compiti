#include <iostream>
using namespace std;
int main(){
	int scambio;
	int arr[11];
	for(int i=0;i<11;i++){
		cin>>arr[i];
	}
	for (int i=0;i<11;i++){
		for (int a=0;a<11-1;a++){
			if(arr[a]>arr[a+1]){
			    scambio=arr[a];
				arr[a]=arr[a+1];
				arr[a+1]=scambio;
			}
		}
	}
	cout<<"numeri ordinati in ordine crescente:\n";
	for (int i=0;i<11;i++){
		cout<<arr[i];
		if (i<10){
			cout<<",";
		}
	}
	cout<<"numero maggiore\n";
	cout<<arr[10];
	cout<<"numero minore\n";
	cout<<arr[0];
}
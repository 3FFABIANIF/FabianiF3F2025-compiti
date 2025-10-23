#include <iostream>
using namespace std;
int main(){
	int n,j,a,scambio;
	int arr[10];
	for(int i=0;i<n;i++){
		cin>>arr [i];
	}
	for(int i=0;i<n;i){
		for(a=0;a<n-1;a){
			if(arr[a]>arr[a+1]){
			scambio=arr [a];
			arr[a]=arr[a+1];
			arr[a+1]=scambio;
			}
		
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[10];
	}
	
}

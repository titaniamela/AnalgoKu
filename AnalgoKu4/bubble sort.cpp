/*
Nama    : Shania Salsabila
Kelas   : B
NPM     : 140810180014
Nama program : bubble sort
*/

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int arr[100],n,temp;
	cout<<"Banyak nilai : ";cin>>n;
	
	for(int i=0;i<n;++i){
		cout<<"Nilai ke-"<<i+1<<" : ";cin>>arr[i];
	}
	
	for(int i=1;i<n;i++){
		for(int j=0;j<(n-1);j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nHasil : "<<endl;
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
}








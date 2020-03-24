/*
Nama    : Shania Salsabila
Kelas   : B
NPM     : 140810180014
Nama program : insertion sort
*/

#include <iostream>
#include <conio.h>

using namespace std;

int data[100],data2[100],n;

void insertion_sort()
{
	int temp,i,j;
	for(i=1;i<=n;i++){
	    temp = data[i];
		j = i -1;
	    while(data[j]>temp && j>=0){
			data[j+1] = data[j];
	   	    j--;
	    }
	    data[j+1] = temp;
	}
}
int main()
{
    cout<<"==INSERTION SORT==";
	cout<<"Banyak Data : "; cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
	  cout<<"Data ke-"<<i<<" : ";
	  cin>>data[i];
	  data2[i]=data[i];
	}
	insertion_sort();
	cout<<"\nHasil : "<<endl;
	for(int i=1; i<=n; i++)
	{
	  cout<<data[i]<<" ";
	}
}


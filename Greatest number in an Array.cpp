#include<iostream>
using namespace std;
int main(){
	int num[100];
	int n;
	cout<<"Size of the array: ";
	cin>>n;
	cout<<"Enter the elements: ";
	
	for(int i=0;i<n;++i){
		cin>>num[i];
	}
	
	for(int i=1;i<n;++i){
		if(num[0]<num[i]){
			num[0]=num[i];
		}
	}
	cout<<num[0];
	return 0;	
}

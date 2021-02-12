#include<iostream>
using namespace std;

int main(){
	cout<<"largest number of 3 numbers"<<endl;
	int x,y,z;
	cout<<"Enter three numbers";
	cin>>x>>y>>z;
	if(x>y){
		//x > y
		if(x>z){
			
			cout<<"Greatest number is "<<x<<endl;
			
		}else{
			cout<<"Greatest number is "<<z<<endl;
			
		}
	}else if(y>x){
		if(y>z){
			cout<<"Greatest number is "<<y<<endl;
			
		}else{
			cout<<"Greatest number is "<<z<<endl;
		}
	}
	return 0;
}

#include<iostream>
using namespace std;

int stack[1000];
int maxsize=100;
int top=-1;

void push(int val){
	if(top>maxsize-1){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		top++;
		stack[top]=val;
		cout<<"Pushed "<<val<<" to the stack"<<endl;
	}
}

void pop(){
	if(top<0){
		cout<<"Stack is empty"<<endl;
		
	}else{
		cout<<"The element "<<stack[top]<<" is popped";
		top--;
		
	}
}
void display(){
	if(top>=0){
		cout<<"The elements in Stack are"<<endl;
		for(int i=top;i>=0;i--){
			cout<<stack[i];
			cout<<endl;
		}
	}else{
		cout<<"Stack is Empty"<<endl;
	}
}

int main(){
	int val, ch;
	
	cout<<"1) Enter a number to Push"<<endl;
	cout<<"2) Pop element from stack"<<endl;
	cout<<"3) Display Stack Elements"<<endl;
	cout<<"4) Exit"<<endl;
	
	
	do{
		cout<<"Enter your Choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"Enter a number to Push"<<endl;
				cin>>val;
				push(val);
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				cout<<"Exit"<<endl;
				break;
			
			}
			default:{
				cout<<"Invalid Choice";
				break;
			}
		}
	}
	while(ch!=4);
	return 0;
}

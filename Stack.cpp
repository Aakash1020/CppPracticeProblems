#include<iostream>
using namespace std;

int stack[1000];
int maxsize=1000;
int top=-1;

void push(int val){
	if(top>maxsize-1){
		cout<<"Stack is full";
	}else{
		top++;
		stack[top]=val;
		cout<<"The element "<< val << " is pushed in the stack"<<endl;
	}
}


void pop(){
	if(top<0){
		cout<<"Stack is Empty"<<endl;
	}else{
		cout<<"The popped element is "<<stack[top]<<endl;
		top--;
	}
}

void display(){
	if(top>=0){
		cout<< "The values in Stack are "<<endl;
		for(int i=top;i>=0;i--){
			
			cout<<stack[i];
			cout<<endl;
		}
	}else{
			cout<<"Stack is empty";
		}
}


int main(){
	
	int val, x;
	cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   
   do{
   
	cout<<"Enter Choice"<<endl;
		cin>>x;
	switch(x){
		
		
		case 1:{
			cout<<"Enter a number to push"<<endl;
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
			cout<<"Exit";
			break;
		}
		default:{
			cout<<"Invalid choice";
			break;
		}
	}
	}while(x!=4);
		return 0;
	
	
	
	
}

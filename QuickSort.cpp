#include<iostream>
using namespace std;


int swap(int a[], int i, int j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

int partition(int a[], int l, int h){
	int pivot = a[h];
	int i = l-1;
	
	for(int j=l;j<=h;j++){
		if(a[j]<pivot){
			i++;
			swap(a,i,j);
		}
	}
	swap(a,i+1,h);
	return i+1;
	
}
void QuickSort(int a[], int l, int h){
	if(l<h){
		int j=partition(a,l,h);
		QuickSort(a,l, j-1);
		QuickSort(a,j+1, h);
	}
}

int main(){
	int a[30],n,i,j;
	cout<<"Enter the number of data elements to be sorted";
	cin>>n;
	cout<<"\nEnter the array elements\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	QuickSort(a,0,n-1);
	cout<<"\nSorted array is "<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	return 0;
	
}



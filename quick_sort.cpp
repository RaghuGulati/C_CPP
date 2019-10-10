//quick sort algorithm

#include<iostream>
using namespace std;

void print(int *A, int start, int end){
	cout<<"Sorted Array: ";
	for(int i=start; i<end+1;i++){
		cout<<A[i]<<"  ";
	}
	cout<<endl;
}

void swap(int &a, int &b){

	int temp;
	temp = a;
	a = b;
	b = temp;

}

int partition(int A[], int start, int end){
	int pivot = A[end];
	int pindex = start;
	int i = 0;

	for(i = start; i <= end - 1; i++){
		if(A[i] <= pivot){
			swap(A[pindex], A[i]);
			pindex++;
		}
	}
	swap(A[pindex], A[end]);
	return pindex;

}


void quicksort(int A[], int start, int end){
	//print(A, start, end); 
	if(start<end){
		int pindex;
		pindex = partition(A, start, end);
		quicksort(A, start, pindex - 1);
		quicksort(A, pindex + 1, end);
	}
}



int main()
{
	int n=0,i;
	cout<<"Enter the no of elements you want to sort: ";
	cin>>n;

	cout<<n<<endl;

	int *ar = new int[n];

	cout<<"Enter the elements in array: "<<endl;
	for(i=0;i<n;i++){
		cin>>ar[i];
	}

	quicksort(ar, 0, n-1);
	print(ar, 0, n-1);
	return 0;
}


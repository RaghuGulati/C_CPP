//Binary Search
#include<iostream>

using namespace std;

int main(){

	int n, beg, mid, end, i, num, no;
	cout<<"Enter the no of elements: ";
	cin>>n;	

	int *ar = new int[n];

	beg = 0;
	end = n;
	mid = int((beg + end)/2);

	cout<<"Enter the numbers in increasing order: "<<endl;
	for(i=0;i<n;i++){
		cin>>ar[i];
	}

	cout<<"Enter the number which you want to find: ";
	cin>>no;

	while(beg<=end){
		if(no == ar[mid]){
			num = 1;			
			break;
		}
		
		else if(no>ar[mid]){ 
			beg = mid + 1;
			mid = int((beg + end)/2);
		}
		else{
			end = mid - 1;
			mid = int((beg + end)/2);
		}
	}


	if(num == 1){
		cout<<"Element found at position: "<<mid+1<<endl;
	}
	else{
		cout<<"Element not found"<<endl;
	}

}


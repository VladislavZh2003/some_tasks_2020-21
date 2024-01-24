#include <iostream>
using namespace std;
int main(){
	
	int *arr = new int[7];
	
	for(int i=0;i<7;i++){
		cout<<"Enter element number "<<i+1<<": ";cin>>arr[i];
		
	}
	
	for(int i=0;i<7;i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<endl;
		}
	}
	
	delete []arr;
	
	return 0;
}

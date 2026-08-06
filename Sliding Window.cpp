#include<iostream>
using namespace std;
void SlidingWindow(int arr[],int n,int k){
	 for(int i=0;i<=n-k;i++){
	 	int max=arr[i];
	 	for(int j=i;j<i+k;j++){
	 		if(max<=arr[j]){
	 			max=arr[j];
			 }
		 }
		 cout<<"Maximum element:"<<max<<endl;
	 }
}
int main(){
	int arr[100],n,k;
	cout<<"Enter n value:";
	cin>>n;
	cout<<"Enter Array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter Window Size:";
	cin>>k;
	SlidingWindow(arr,n,k);
	return 0;
	
}

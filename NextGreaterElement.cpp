#include<iostream>
#include<stack>
using namespace std;
void nextGreater(int arr[],int n){
	int result[100];
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		while(!st.empty()&& arr[i]>=st.top())
		{
			st.pop();
		}
		if(st.empty()){
			result[i]=-1;
		}
		else{
			result[i]=st.top();
		}
		st.push(arr[i]);
	}
	cout<<"Next Greater elements are:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"->"<<result[i]<<endl;
	}
}
int main(){
	int arr[100],n;
	cout<<"Enter n value:";
	cin>>n;
	cout<<"Enter values:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	nextGreater(arr,n);
	return 0;
}

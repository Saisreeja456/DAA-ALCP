#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter no of trains:";
	cin>>n;
	vector<int> arrival(n),departure(n);
	cout<<"Enter arrival times:";
	for(int i=0;i<n;i++){
		cin>>arrival[i];
	}
	cout<<"Enter departure time:";
	for(int i=0;i<n;i++){
			cin>>departure[i];
		}
	sort(arrival.begin(),arrival.end());
	sort(departure.begin(),departure.end());
	int i=0,j=0;
	int platforms=0;
	int maxplatforms=0;
	while(i<n&&j<n){
		if(arrival[i]<departure[j]){
			platforms++;
			maxplatforms=max(maxplatforms,platforms);
			i++;
		}
		else{
			platforms--;
			j++;
		}
	}
	cout<<"Minimum number of platforms required:"<<maxplatforms<<endl;
	
}

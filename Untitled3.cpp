#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v(4);
	for(int i=0; i<v.size(); i++){
		cin>>v[i];
		
	}
	int curr=0;
	for(int i=0; i<v.size(); i++){
		for(int j=1; j<v.size(); j++){
			curr+=v[j];
			cout<<v[j]<<endl;
		}
	}cout<<curr<<endl;
	return 0;
}

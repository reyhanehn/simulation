#include<bits/stdc++.h>

using namespace std;

int main(){
	string n;
	cin>>n;
	int t=0;
	for(int i=0;i<(n.size()-1);i++){
		if(n[i]!="7" or n[i]!="4"){
			cout<<"NO"<<endl;
			break;
		}
		else{
			t++;
		}
	}
	if(t==n.size()){
		cout<<"YES"<<endl;
	}		
	
}

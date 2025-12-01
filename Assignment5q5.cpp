#include<iostream>
using namespace std;

string count(string s){
int n=s.size();


string ans="";
	for(int i=0;i<n-1;i++){
 

 ans+=s[i];
 ans+=to_string(s[i+1]-s[i]);
}
ans+=s[n-1];
return ans;
}
int main() {
	string s;

	cin>>s;

	cout<<count(s);
	return 0;
}

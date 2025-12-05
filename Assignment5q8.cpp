#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 string consecutive_duplicates(string s){
     string ans="";
	 ans+=s[0];

	int n=s.size()-1;

	for(int i=1;i<=n;i++){

		if(s[i]==s[i-1]){

			continue;
		}
		else if(s[i]!=s[i-1]){
			
			ans+=s[i];

		}
	}
	return ans;
	
}

int main() {

	string s;
	cin>>s;

	cout<<consecutive_duplicates(s);
	return 0;
}

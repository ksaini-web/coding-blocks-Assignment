#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

string toggles(string s){

	for(int i=0;i<s.size();i++){

		if(islower(s[i])){

			s[i]=toupper(s[i]);
		}
		else if(isupper(s[i])){

			s[i]=tolower(s[i]);
		}


	}

	return s;
}
int main() {

	string s;

	cin>>s;

	cout<<toggles(s);


	return 0;
}

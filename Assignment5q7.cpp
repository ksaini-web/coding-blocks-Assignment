#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
	cin>>t;

    string s;

    int i=0;

	while(t--){

		cin>>s;

	
	

	vector<int>freq(256,0);
	char ans='\0';

	for(char x:s){

		freq[(unsigned char)x]++;
	}


for(char x:s ){
	if(freq[(unsigned char)x]==1){
		 ans=x;
		 break;
	}

}

if(ans=='\0'){
	cout<<-1<<endl;
}
else{
	cout<<ans<<endl;;
}}
return 0;



	

}

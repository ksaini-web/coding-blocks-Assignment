// Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds”
//  print out a3b2c2ds.

#include<iostream>
using namespace std;
string countstring(string s){

    int n=s.size();

    string s2="";

    int count=1;
    for(int i=0;i<n;i++){

        if(i<n-1&&s[i]==s[i+1]){

        
          
            count++;

        }
        else{

            s2+=s[i];

            if(count>1){
                s2+=to_string(count);
            }
            count=1;
       
        }

    }
    return s2;
}

int main(){
string s;
cin>>s;

    cout<<countstring(s);


    return 0;

}

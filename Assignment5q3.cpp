#include<iostream>
using namespace std;

string evenodd(string s){
    int n = s.size();
    
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
          
            s[i] = s[i] + 1;
        }
        else{
          
            s[i] = s[i] - 1;
        }
    }

    return s;
}

int main() {
    string s;
    cin >> s;

    cout << evenodd(s);

    return 0;
}

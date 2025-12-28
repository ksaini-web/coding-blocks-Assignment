#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class customer{
public:
    string name;
    int age;
    char gender;
    double credits;
    
    void print(){
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;
        cout<<"credits = "<<credits<<endl;
    }
};

bool ageCompare(customer a, customer b){
    return a.age < b.age;
}

int main(){

    vector<customer> v;

    v.push_back(customer{"kartik",21,'m',5222});
    v.push_back(customer{"mandeep",17,'m',4222});
    v.push_back(customer{"khushi",17,'f',4222});

    cout<<"Before Sorting:\n";
    for(customer c : v){
        cout<<c.name<<" "<<c.age<<" "<<c.credits<<endl;
    }

    cout<<endl;

    sort(v.begin(), v.end(), ageCompare);

    cout<<"After Sorting (by age):\n";
    for(customer c : v){
        cout<<c.name<<" "<<c.age<<" "<<c.credits<<endl;
    }

    return 0;
}

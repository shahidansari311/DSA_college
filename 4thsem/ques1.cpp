#include <iostream>
#include <vector>
using namespace std;

void show(vector<string> s){
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
}
int main(){
    vector<string>name;
    int n=5;
    for(int i=0;i<n;i++){
        string s;
        cout<<"Enter name of "<<i+1<<" Student : ";
        cin>>s;
        name.push_back(s);
    }
    show(name);
    return 0;
}
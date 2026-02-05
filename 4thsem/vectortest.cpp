#include <iostream>
#include <vector>
using namespace std;

void show(vector<int> a){
    cout<<"Size of array" <<a.size()<<endl;
    cout<<"capacity of array: "<<a.capacity()<<endl;
    if(a.size()>0){
        cout<<"Printing array: ";
        for(auto i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int>a;
    int n;
    cout<<"Enter number of details you want to enter : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    show(a);
    return 0;
}
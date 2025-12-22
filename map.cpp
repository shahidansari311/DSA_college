#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>student;
    int n;
    cout<<"Enter number of students :";
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        int roll;
        cin>>name>>roll;
        student.insert({name,roll});
    }
    return 0;
}
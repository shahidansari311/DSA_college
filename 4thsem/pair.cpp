#include <iostream>
#include <vector>
// #include<pair>

using namespace std;

int main(){
    // cout<<"Hello World"<<endl;
    // //Pair can be used as a type that will take two data types in single variable
    
    // pair<int,string> s1;
    // s1.first=12;
    // s1.second="Shahid";
    // // cout<<s1<<endl;
    // cout<<s1.first<<" "<<s1.second<<endl;

    // s1=make_pair(10,"Shahid");
    // cout<<s1.first<<" "<<s1.second<<endl;

    // pair<string,string> = {"Hello","Bye"};
    //Write a program to store details of 5 students with roll number and name and print them

    pair<int,string> student[5];
    for(int i=0;i<5;i++){
        cout<<"Enter "<<i+1<<" Student roll number :";
        cin>>student[i].first;
        cout<<"Enter "<<i+1<<" Student name :";
        cin>>student[i].second;
    }

    for(int i=0;i<5;i++){
        cout<<i+1 <<" Student Roll no : "<<student[i].first<<"\tName : "<<student[i].second<<endl;
    }

    return 0;
}
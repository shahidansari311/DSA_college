#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;

void show(map<int,string>a){
    for(auto i:a){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    cout<<endl;
}

int main(){
    map<int,string>a;
    a[0]="hello";
    a[5]="bye";
    a[4]="bgg";
    a[3];
    show(a);
 
    if(a.find(4)!=a.end()){
        cout<<"Found"<<endl;
        a.erase(4);
    }
    else
        cout<<"Not found"<<endl;
    cout<<"end of main"<<endl;

    a.insert({6,"shivang"});
    show(a);
    return 0;     
}
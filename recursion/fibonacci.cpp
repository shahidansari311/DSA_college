#include <iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1) return n;

    int f=fib(n-1);
    int l=fib(n-2);

    return f+l;
}

int main(){
    int n=6;
    int b=fib(n);
    cout<<b;   
    return 0;
}
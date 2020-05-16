#include<iostream>
using namespace std;
int fibonacci(int);

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}

int fibonacci(int n){
    if(!(n==0||n==1)){
        return fibonacci(n-2)+fibonacci(n-1);
    }
    return n;
}
#include<iostream>
using namespace std;

int combination(int,int);

int main(){
    int n,r;
    cin>>n>>r;
    cout<<combination(n,r);
    return 0;
}

int combination(int n,int r){
    if(!(r==n ||r==0)){
        return combination(n-1,r)+combination(n-1,r-1);
    }
    return 1;
}

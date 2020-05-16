#include<iostream>
using namespace std;

double taylor_series(int,int);

int main(){
    int x,n;
    cin>>x;
    cin>>n;
    cout<<taylor_series(x,n);
    return 0;
}

double taylor_series(int x,int n){
    static double term=1;
    if(n>0){
        term=1+(term*(double)x/(double)n);
        return taylor_series(x,n-1);
    }
    return term;
}


#include<iostream>
using namespace std;

double taylor_series(int,int);
int power(int,int);
int factorial(int);

int main(){
    int x,n;
    cin>>x;
    cin>>n;
    cout<<taylor_series(x,n);
    return 0;
}

double taylor_series(int x,int n){
    if(n>0){
        double term=(double)power(x,n)/(double)factorial(n);
        return taylor_series(x,n-1)+term;
    }
    return 1;
}

int factorial(int number){
    if(number>0){
        return number*factorial(number-1);
    }
    return 1;
}

int power(int number,int exponent){
    if(exponent>0){
        return number*power(number,exponent-1);
    }
    return 1;
}

#include<iostream>
using namespace std;

int power(int,int);

int main(){
    int number,exponent;
    cin>>number>>exponent;
    cout<<power(number,exponent);
    return 0;
}

int power(int number, int exponent){
    if(exp==0){
        return 1;
    }
    else if(exp%2==0){
        return pow(base*base, exp/2);
    }
    else{
        return base*pow(base*base, (exp-1)/2);
    }
}

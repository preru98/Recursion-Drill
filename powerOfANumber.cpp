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
    if(exponent>0){
        return number*power(number,exponent-1);
    }
    return 1;
}
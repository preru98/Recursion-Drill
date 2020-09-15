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
    if(exponent==0){
        return 1;
    }
    else if(exponent%2==0){
        return power(number*number, exponent/2);
    }
    else{
        return number*power(number*number, (exponent-1)/2);
    }
}

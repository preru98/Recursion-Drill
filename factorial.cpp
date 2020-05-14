#include<iostream>
using namespace std;
int factorial(int);

int main(){
    int number;
    cin>>number;
    cout<<factorial(number);
    return 0;
}

int factorial(int x){
    if (x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
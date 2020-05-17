#include<iostream>
using namespace std;

int sum_digits(int n);

int main(){
    int number;
    cin>>number;
    cout<<sum_digits(number);
    return 0;
}

int sum_digits(int n){
    static int sum=0;
    if(n>0){
        
        int rem=n%10;
        sum+=rem;
        return sum_digits(n/10);
    }
    return sum; 
}

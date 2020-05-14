//This is recursive solution but there is a mathematical formula for this particular task i.e. sum=(n*(n+1))/2 
#include<iostream>
using namespace std;

int sum(int);

int main(){
    int number;
    cin>>number;
    cout<<"The Sum is : "<<sum(number);
    return 0;
}


int sum(int n){
    if(n>0){
        return n+sum(n-1);
    }
    return 0;
}

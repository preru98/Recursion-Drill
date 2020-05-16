#include<iostream>
using namespace std;

void print_reverse(int);
int main(){
    int n;
    cin>>n;
    print_reverse(n);
    return 0;
}

void print_reverse(int n){
    if(n>0){
        cout<<n<<" | ";
        print_reverse(n-1);
    }    
}
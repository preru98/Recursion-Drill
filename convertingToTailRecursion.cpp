//Printing 1-N

#include<iostream>
using namespace std;

void non_tail_recursion(int);
void tail_recursion(int, int =1);

int main(){
    int N = 5; 
    non_tail_recursion(N);
    cout<<endl;
    tail_recursion(N);
    return 0;
}

void non_tail_recursion(int N){
    if(N){
        non_tail_recursion(N-1);
        cout<<N<<" | ";
    }
}
void tail_recursion(int N, int K){
    if(N){
        cout<<K<<" | ";
        tail_recursion(N-1, K+1);
    }
}
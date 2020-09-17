//Printing 1-N

#include<iostream>
using namespace std;

int non_tail_recursion_factorial(int);
int tail_recursion_factorial_using_static(int);
int tail_recursion_factorial(int, int=1);

int main(){
    int N = 5; 
    cout<<non_tail_recursion_factorial(N);
    cout<<endl;
    cout<<tail_recursion_factorial(N);
    cout<<endl;
    cout<<tail_recursion_factorial_using_static(N);
    return 0;
}

int non_tail_recursion_factorial(int N){
    if(N){
        return N * non_tail_recursion_factorial(N-1);
    }
    return 1;
}
int tail_recursion_factorial_using_static(int N){
    static int result = 1;
    if(N){
        result= N*result;
        return tail_recursion_factorial_using_static(N-1);
    }
    return result;
}
int tail_recursion_factorial(int N, int K){
    if(N){
        return tail_recursion_factorial(N-1, K*N);
    }
    return K;
}
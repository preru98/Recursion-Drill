#include<iostream>
using namespace std;
int fibonacci(int,int[]);

int main(){
    int n;
    cin>>n;
    int* fibonacci_table=new int[n+1];
    for(int i=0;i<n+1;i++){
        fibonacci_table[i]=-1;
    }
    cout<<fibonacci(n,fibonacci_table)<<endl;
    for(int i=0;i<n+1;i++){
        cout<<fibonacci_table[i];
    }
    return 0;
}

int fibonacci(int n,int table[]){
    if(!(n==0||n==1)){
        if(table[n]==-1){
            table[n]=fibonacci(n-2,table)+fibonacci(n-1,table);
        }      
        return table[n];
    }
    if(table[n]==-1){
        table[n]=n;
    }
    return table[n];
}
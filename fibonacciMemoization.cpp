#include<iostream>
using namespace std;

int recFib(int, int[]);
void display(int [], int);
void fillInvalid(int [], int);
int main(){
    int n=8;
    int* table=new int[n+1];
    fillInvalid(table, n+1);
    cout<<recFib(n,table);
    cout<<endl;
    display(table, n+1);
    return 0;
}

int recFib(int range, int table[]){
    if(table[range]!=-1){
        return table[range];
    }
    if(range ==0 || range ==1){
        table[range]=range;
    }
    else{
        table[range] = recFib(range-1, table)+recFib(range-2, table);
    }
    return table[range];
}

void display(int array[], int size){
    for (int i = 0; i < size; i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}
void fillInvalid(int array[], int size){
    for (int i = 0; i < size; i++){
        array[i]=-1;
    }
}

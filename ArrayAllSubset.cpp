#include<iostream>
#include<string>
using namespace std;

void print_sub(int*, int, string="", int=0);
int main(){

    int array[]={1, 2, 3};
    int size=sizeof(array)/sizeof(array[0]);
    print_sub(array, size);
    // string t="";
    // int k=9;
    // t+=to_string(k);
    // cout<<t<<"\n";
    return 0;
}

void print_sub(int test[], int size, string current, int index){
    if(index==size){
        if(current==""){
            cout<<"$";
            cout<<"\n";
        }
        else{
            cout<<"{ ";
            for(char i: current){
                cout<<i<<" ";
            }
            cout<<" }";
            cout<<"\n";
        }
        return;
    }
    print_sub(test,  size, current, index+1);
    print_sub(test,  size, (current+=to_string(test[index])), index+1);
}
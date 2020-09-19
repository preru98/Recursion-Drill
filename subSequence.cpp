#include<iostream>
#include<string>
using namespace std;

void sub_sequence(string, string="", int=0);
int main(){
    string base = "ABC";
    sub_sequence(base);
    return 0;
}

void sub_sequence(string base, string current, int index){
    if(index==base.size()){
        cout<<current<<" | ";
    }
    else{
        sub_sequence(base, current, index+1);
        sub_sequence(base, current+base[index], index+1);
    }
}
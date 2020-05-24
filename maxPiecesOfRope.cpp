#include<iostream>
#include<algorithm>
using namespace std;

int find_maximum(int,int,int,int);

int main(){
    int rope_length=10;   
    int a=2,b=1,c=5;
    cout<<find_maximum(rope_length,a,b,c);
    return 0;
}

int find_maximum(int rope_length,int a,int b,int c){
    if(rope_length>0){
        int a_cut=find_maximum(rope_length-a,a,b,c);
        int b_cut=find_maximum(rope_length-b,a,b,c);
        int c_cut=find_maximum(rope_length-c,a,b,c);
        int maximum=max({a_cut,b_cut,c_cut});
        if (maximum==-1) return -1;
        else return maximum+1;
    }
    else if(rope_length==0){
        return 0;
    }
    else {
        return -1;
    }
}


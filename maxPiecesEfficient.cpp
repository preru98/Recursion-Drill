#include<iostream>
#include<algorithm>
using namespace std;

int find_maximum(int,int,int,int,int[]);

int main(){
    int rope_length=23;   
    int a=2,b=3,c=1;
    static int* store=new int[rope_length+1];
    for(int i=0;i<rope_length+1;i++){
        store[i]=-1;
    }
    cout<<find_maximum(rope_length,a,b,c,store);
    cout<<endl;
    for(int i=0;i<rope_length+1;i++){
        cout<<store[i]<<" | ";
    }
    
    return 0;
}

int find_maximum(int rope_length,int a,int b,int c,int store[]){
    
    if(rope_length>0){
        if(store[rope_length]==-1){
            int a_cut=find_maximum(rope_length-a,a,b,c,store);
            int b_cut=find_maximum(rope_length-b,a,b,c,store);
            int c_cut=find_maximum(rope_length-c,a,b,c,store);
            int maximum=max({a_cut,b_cut,c_cut});
            if (maximum==-1) {
                store[rope_length]=-1;
            }
            else {
                store[rope_length]=maximum+1;
            }
            return store[rope_length];
        }
        else{
            return store[rope_length];
        }
    }
    else if(rope_length==0){
        store[rope_length]=rope_length;
        return store[rope_length];
    }
    else {
        return -1;
    }
}


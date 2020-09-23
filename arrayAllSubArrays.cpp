#include<iostream>
#include<vector>
using namespace std;

void print_subarray(vector<int>, int=0, int=0);

int main(){
    vector<int> array ={1,2,3};
    cout<<"$\n";
    print_subarray(array);
    return 0;
}

void print_subarray(vector<int> array, int start, int end){
    if(start==array.size()){
        return;
    }
    if(end==array.size()){
       print_subarray(array, start+1, start+1);
    }
    else{
        cout<<"[";
        for(int i=start;i<=end;i++){
            cout<<array[i]<<" ";
        }
        cout<<"]\n";
        print_subarray(array, start, end+1);
    }
}
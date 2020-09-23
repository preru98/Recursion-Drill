#include<iostream>
#include<vector>
using namespace std;

int print_subarray(vector<int>, int=0, int=0, int=0);

int main(){
    vector<int> array ={1,2,3,4};
    cout<<"$\n";
    cout<<print_subarray(array);
    return 0;
}

int print_subarray(vector<int> array, int start, int end, int sum){
    if(start==array.size()){
        return sum;
    }
    if(end==array.size()){
        return print_subarray(array, start+1, start+1, sum);
    }
    else{
        cout<<"[";
        for(int i=start;i<=end;i++){
            cout<<array[i]<<" ";
            sum+=array[i];
        }
        cout<<"]\n";
        return print_subarray(array, start, end+1, sum);
    }
}
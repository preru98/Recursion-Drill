#include<iostream>
#include<vector>
using namespace std;

void print_sub(vector<int>, vector<int> current={}, int=0);
void display(vector<int>);

int main(){
    vector<int> array = {1, 2, 3};
    print_sub(array);
    return 0;
}

void print_sub(vector<int> array, vector<int> current, int index){
    if(index==array.size()){
        display(current);
        return;
    }
    print_sub(array, current, index+1);
    current.push_back(array[index]);
    print_sub(array,current, index+1);
}

void display(vector<int> array){
    
    cout<<"[";
    for(int element : array){
        cout<<" "<<element;
    }
    cout<<"]";
    cout<<"\n";
}
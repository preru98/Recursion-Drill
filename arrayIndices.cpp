#include<iostream>
#include<vector>
using namespace std;

vector<int>find_all_instances_of_x(int,int,vector<int>);
void display(vector<int>);

int main(){
    vector<int>array={15,20,15,66,23,45,15,15,90};
    int number_to_find=15;
    vector<int>indices_array=find_all_instances_of_x(number_to_find,0,array);
    display(indices_array);
    return 0;
}

vector<int>find_all_instances_of_x(int x,int current_index,vector<int>array){
    static vector<int>indices_array;
    if(current_index<array.size()){
        if(array[current_index]==x){
            indices_array.push_back(current_index);
        }
        return find_all_instances_of_x(x,current_index+1,array);
    }
    return indices_array;
}

void display(vector<int>array){
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" | ";
    }
}


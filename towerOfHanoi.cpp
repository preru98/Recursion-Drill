#include<iostream>
using namespace std;

int tower_of_hanoi(int, char,char,char);

int main(){
    int number_of_disks;
    cin>>number_of_disks;
    char A='A',B='B',C='C';
    int steps=tower_of_hanoi(number_of_disks,A,B,C);
    cout<<"Number of Steps: "<<steps;
    return 0;
}

int tower_of_hanoi(int number_of_disks,char A,char B,char C){
    if(number_of_disks>0){
        int x=tower_of_hanoi(number_of_disks-1,A,C,B);
        cout<<"Move a disk from "<<A<<" to "<<C<<endl;
        int y=tower_of_hanoi(number_of_disks-1,B,A,C);
        return 1+x+y;
    }
    return 0;
}
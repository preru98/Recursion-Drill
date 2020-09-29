#include<iostream>
using namespace std;

int gcd (int, int);
int array_gcd(int, int[]);
int main(){
    int array[] = {4, 16, 8};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<array_gcd(size, array);
    return 0;
}
int array_gcd(int size, int array[]){
    int res = array[0];
    for(int i=1 ;i<size;i++){
        res=gcd(res, array[i]);
        if(res==1){
            return res;
        }
    }
    return res;
}

int gcd (int num1, int num2){
    if(num2==0){
        return num1;
    }
    return gcd(num2, num1%num2);
} 

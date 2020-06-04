#include<iostream>
using namespace std;

int min_coin(int, int, int[]);
int main(){
    int size=3;
    int denominations[]={1,3,4};
    int amount=34;
    cout<<min_coin(amount,size,denominations);
    return 0;
}

int min_coin(int amount,int size,int denominations[]){
    if(amount==0){
        return 0;
    }
    else{
        int min_change=amount;
        for(int i=0;i<size;i++){
            if(amount-denominations[i]>=0){
                int ret_coins=min_coin(amount-denominations[i],size,denominations);
                if(ret_coins+1<min_change){
                    min_change=ret_coins+1;
                }
            }
        }
        return min_change;
    }
}
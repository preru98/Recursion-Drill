#include<iostream>
using namespace std;

int min_coin(int, int, int[],int[]);
int main(){
    int size=3;
    int denominations[]={1,3,4};
    int amount;
    cin>>amount;
    static int* table=new int [amount+1];
    for(int i=0;i<amount+1;i++){
        table[i]=-1;
    }
    cout<<min_coin(amount,size,denominations,table);
    // cout<<endl;
    // for(int i=0;i<amount+1;i++){
    //     cout<<table[i]<<" | ";
    // }
    return 0;
}

int min_coin(int amount,int size,int denominations[],int table[]){
    // cout<<"amount"<<amount<<endl;
    if(amount==0){
        // cout<<"returning 0"<<endl;
        return 0;
    }
    else{
        int min_change=amount;
        // cout<<"min_change"<<min_change<<endl;
        for(int i=0;i<size;i++){
            if(amount-denominations[i]>=0){
                // cout<<"amount-denominations[i] :"<<amount-denominations[i]<<endl;
                int ret_coins;
                if(table[amount-denominations[i]]==-1){
                    ret_coins=min_coin(amount-denominations[i],size,denominations,table);
                    table[amount-denominations[i]]=ret_coins;
                    // cout<<"NC ret_coins :"<<ret_coins<<endl;
                }
                else{
                    ret_coins=table[amount-denominations[i]];
                    // cout<<"C ret_coins :"<<ret_coins<<endl;
                }
                if(ret_coins+1<min_change){
                    min_change=ret_coins+1;
                }
            }
        }
        // cout<<"finally min_Change :"<<min_change<<endl;
        table[amount]=min_change;
        return table[amount];
    }
}
#include<iostream>
#include<algorithm>
using namespace std;

int* input_array(int);
int find_majority(int,int,int[]);
void display(int,int[]);
int count(int,int,int,int[]);


int main(){
    int size;
    cin>>size;
    int* array=input_array(size);
    // cout<<"Majority : ";
    int result=find_majority(0,size-1,array);
    if(result==-1){
        cout<<0;
    }
    else{
        cout<<1;
    }
    return 0;
}

int* input_array(int size){
    int* array=new int[size];
    for(int x=0;x<size;x++){
        cin>>array[x];
    }
    return array;
}

int find_majority(int lb,int ub,int array[]){
    if(lb==ub){
        return array[lb];
    }
    else{
        int mid=(lb+ub)/2;
        // cout<<"mid: "<<mid<<endl;
        int left_majority=find_majority(lb,mid,array);
        int right_majority=find_majority(mid+1,ub,array);
        // cout<<"left_majority : "<<left_majority<<endl;
        // cout<<"right_majority : "<<right_majority<<endl;

        if(left_majority==right_majority){
            return left_majority;
        }
        else if(left_majority==-1 && right_majority!=-1){
            // cout<<"here"<<endl;
            int occurence=count(right_majority,lb,ub,array);
            // cout<<"occurence :"<<occurence<<endl;
            // cout<<"mid :"<<mid<<endl;
            // cout<<"ub :"<<ub<<endl;
            int exp=(ub-lb+1)/2;
            // cout<<"(ub-lb+1)/2 :"<<exp<<endl;

            if(occurence>exp){
                return right_majority;
            }
            else{
                return -1;
            }
        }
        else if(right_majority==-1 && left_majority!=-1){
            int occurence=count(left_majority,lb,ub,array);
            int exp=(ub-lb+1)/2;
            if(occurence>exp){
                return left_majority;
            }
            else{
                return -1;
            }
        }
        else{
            int left_occurence=count(left_majority,lb,mid,array);
            int right_occurence=count(right_majority,mid+1,ub,array);
            // cout<<"left_occurence: "<<left_occurence<<endl;
            // cout<<"right_occurence: "<<right_occurence<<endl;
            if(left_occurence==right_occurence){
                return -1;
            }
            else if(left_occurence>right_occurence){
                return left_majority;
            }
            else{
                return right_majority;
            }
        }
    }    
}

void display(int size,int arry[]){
    for(int i=0;i<size;i++){
        cout<<arry[i]<<" ";
    }
}

int count(int key,int lb,int ub,int array[]){
    int count=0;
    for(int i=lb;i<=ub;i++){
        if(array[i]==key){
            count++;
        }        
    }
    return count;
}

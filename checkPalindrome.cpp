#include<iostream>

using namespace std;
bool check_palindrome(int, int, string);
int main(){
    string sentence;
    cin>>sentence;
    int size=sentence.size();
    cout<<check_palindrome(0,size-1,sentence);
    return 0;
}

bool check_palindrome(int start, int end, string sentence){
    if(start<end){
        if(sentence[start]==sentence[end]){
            return check_palindrome(start+1,end-1,sentence);
        }
        else{
            return false;
        }
    }
    return true;
}



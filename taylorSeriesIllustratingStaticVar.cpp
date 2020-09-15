#include<iostream>

using namespace std;
double taylorStatic(int, int);
int main(){
    cout<<taylorStatic(3,5);
    return 0;
}
double taylorStatic(int x, int n){
    if(n){
        static double res=1;
        double term;
        term=taylorStatic(x, n-1);
        res*=(double)x/(double)n;
        return term+res;
    }
    return 1;
}


#include<iostream>
using namespace std;

int factorial(int n){
    if (n==0 | n==1)
        return 1;
    return n*factorial(n-1);
}

int maxOf(int a,int b){
    return a>b? a : b;
}

int main(){
    int i=9;
    cout<<factorial(9)<<endl;
    cout<<maxOf(i,4)<<endl;
    
    return 0;
}
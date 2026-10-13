#include<iostream>
using namespace std;
int main(){
    int n; 
    int r=0;
    cout<<"enter the number; ";
    cin>>n;
    int original = n; 
    while (n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    if(r==original){
        cout<<"thr given number is a palindrome " <<endl;
    }
    else{
        cout<<"the given number is not a palindrome"<<endl;
    }
    return 0;
}
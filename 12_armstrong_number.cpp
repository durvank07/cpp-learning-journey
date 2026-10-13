#include<iostream>
using namespace std;
int main(){
    int n;
    int digit;
    int original;
    int sum=0;
    cout<<"enter the number: ";
    cin>>n;
    original=n;
    while(n>0){
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if(sum==original){
        cout<<"the given number is an armstrong number "<<endl;
    }
    else{
        cout<<"the given number is not an armstrong number "<<endl;
    }
    
return 0;
}
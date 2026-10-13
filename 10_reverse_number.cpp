#include<iostream>
using namespace std;
int main(){
    int num;
    int r=0;
    cout<<"enter a number:";
    cin>>num;

    while(num>0){
        r=r*10;
        r=r+(num%10);
        num=num/10;

    }
    cout<<"reverse number is: "<<r<<endl;
    return 0;


}
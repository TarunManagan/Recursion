#include<iostream>
using namespace std;

int add(int n){
    if(n<=1){ //Terminating statement (Base Condition)
        return 1;
    }else{
        return (n+add(n-1)); //Recursion
    }
}

int main(){
    int X,n;
    cout<<"Enter a number: ";
    cin>>n;
    X= add(n); //Function calling
    cout<<X;
    return 0;
}

/*OUTPUT
Enter a number: 5
15
*/

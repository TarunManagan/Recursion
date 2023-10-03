#include<iostream>
using namespace std;

int fact(int n){
    if(n<=1){ //Terminating statement
        return 1;
    }else{
        return (n*fact(n-1)); //Recursion
    }
}

int main(){
    int X,n;
    cout<<"Enter a number: ";
    cin>>n;
    X= fact(n); //Function calling
    cout<<X;
    return 0;
}

/*OUTPUT
Enter a number: 4
24
*/

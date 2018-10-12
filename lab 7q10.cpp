// Use recursion to find the nth fibonacci number

#include<iostream>
using namespace std;

// Recursive fib function
int fib(int a,int b=0,int c=1){

if(a) {return fib(a-1,c,b+c);}

else {return c;}

}

// Main function
int main(){
int n;
cout << "This program is meant to find the any term of fibonacci numbers." << endl;
cout << "Tell us which term you wish to find." << endl;
cin >> n;

// Calling for recursive function 
cout << "The fibonacci number is " << fib(n-1) << endl;
return 0;
}

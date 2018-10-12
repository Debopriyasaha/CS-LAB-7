// To find the factorial of a number using recursion

#include<iostream>
using namespace std;

// Recursive factorial function
int fac(int a){
if (a==0){return 1;}
else {return a*(fac(a-1));}
}

// Main function
int main(){
int n;
cout << "Plz give us a number." << endl;
cin >> n;

// Calling for fac function
int r = fac(n);
cout << "The factorial is " << r << endl;

return 0;
}

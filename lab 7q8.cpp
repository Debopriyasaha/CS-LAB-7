//To find the sum of digits of a given number
#include<iostream>
using namespace std;

// Recursive digits sum function
int digsum(int a){
int x = a%10;
if (a/10 == 0){return a;}
else return x+(digsum(a/10));
}

// Main function
int main(){
int n;
cout << "Care to give us a number" << endl;
cin >> n;

// Calling for recursive function
	int r = digsum(n);
	cout << "The sum is " << r << endl;
return 0;
}

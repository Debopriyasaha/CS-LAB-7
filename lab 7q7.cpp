// To check wether the number is a palindrome

#include<iostream>
using namespace std;
// Recursive reverse function
int rev(int y,int a){
int x;
x = a%10;
y = (y*10)+x;
if (a/10 == 0){return (y);}
return rev(y,a/10);
}

// Main function
int main(){
int n;
cout << "This is a program to check for palindromes" << endl;
cout << "Please type a number." << endl;
cin >> n;

	// Calling for reverse function
	int m = rev(0,n);

	// Checking for palindrome
	if (m == n)
	{cout << "The number is a palindrome." << endl;}
	else {cout << "The number is not a palindrome." << endl;}

return 0;
}

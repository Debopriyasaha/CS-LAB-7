// Use recursion to find powers of any number

#include<iostream>
using namespace std;

// Recursive exp function
int power(int n, int p){
	if (p == 0) return 1;
	else
	{return  n*power(n, p-1);}
}
// Main function
int main (){
	int n,p;
	cout << "Write the base number whose power you wish to find." << endl;
	cin >> n;
	cout << "Write the power of the number." << endl;
	cin >> p;

// Calling for exp function
	int exp = power(n,p);
	
	cout << "Your result is " << exp <<  endl;
return 0;
}



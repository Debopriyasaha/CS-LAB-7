//Print all natural numbers from 1 to n

#include<iostream>
using namespace std;

// Recursive function for printing
int nat(int a, int b){
	if (a == b+1){return 1;} 
	else {cout << a << " ";
	nat(a+1,b);}
	return 1;
}

// Main function
int main(){
	int m,n;
	cout << "Upto where do you want the numbers?" << endl;
	cin >> n;
	m = 1;
	
	// Calling for recursion
	int r = nat(m,n);
	cout << endl;
return 0;
}

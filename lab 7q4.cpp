// To print sum of all natural numbers upto given range

#include<iostream>
using namespace std;

// Recursive nat function
int prnat(int a){
	if (a==0){return 0;}
	 else {return a+(prnat(a-1));}
}

// Main function
int main(){
	int n;
	cout << "Upto where you wish to find the sum?" << endl;
	cin >> n;
	

	// Calling for recursion
	int r = prnat(n);
	cout << "The sum is " << r << endl;
return 0;
}

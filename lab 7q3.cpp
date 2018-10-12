// To print all odd numbers upto given range

#include<iostream>
using namespace std;

// Recursive print function
int prodd(int x, int y){
	cout << x << " ";
	if (x == y){ return 1;}
	else {prodd(x+2,y);} 
}

// Main function
int main(){
	int n;
	cout << "Upto which number do you wish to print the odd numbers?" << endl;
	cin >> n;
	int m = 1;
		
		if ((n%2) == 0) {n = n-1;}

	//Calling for recursion
	int r = prodd(m, n);
	
return 0;
}

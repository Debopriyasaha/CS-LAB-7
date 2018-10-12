// To find reverse of any number using recursion

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
cout << "Please type the number whose reverse you wish to find." << endl;
cin >> n;

// Callling for recursive function
int r = rev(0,n);
cout << "The reverse of the number is " << r << endl;

return 0;
}

#include <bits/stdc++.h>

#define ulli unsigned long long int

using namespace std;

ulli toBinary(ulli n);
ulli toOctal(ulli n);
string toHexa(ulli n);

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ulli n;
	cin >> n;
	cout << toBinary(n) << endl;
	cout << toOctal(n) << endl;
	cout << toHexa(n) << endl;
	return 0;
}

ulli toBinary(ulli n){
	return (n == 0) ? 0 : toBinary(n/2) * 10 + (n % 2); 
}

ulli toOctal(ulli n){
	return (n == 0) ? 0 : toOctal(n/8) * 10 + (n % 8);
}

string toHexa(ulli n){
	string hex;
    char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    while (n > 0) {
        ulli res = n % 16;
        hex = hexDigits[res] + hex;
        n /= 16;
    }
    return hex;
}
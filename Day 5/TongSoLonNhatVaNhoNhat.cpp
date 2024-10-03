#include <bits/stdc++.h>

using namespace std;

void inputArray(int array[], int length);
void outputArray(int array[], int length);
int maxSum1(int array[], int length);
int maxSum2(int array[], int length);

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	unsigned int n;
	cin >> n;
	int array[n];
	inputArray(array, n);
	cout << maxSum1(array, n);
	cout << endl;
	return 0;
}

void inputArray(int array[], int length){
	for (int i = 0; i < length; i++){
		cin >> array[i];
	}
}

void outputArray(int array[], int length){
	for (int i = 0; i < length; i++){
		cout << array[i] << " ";
	}
}

int maxSum1(int array[], int length){
	int maxS = -1e9;
	for (int i = 0; i < length - 1; i++){
		for(int j = i+1; j < length; j++) {
			maxS = max(array[i]*array[j], maxS);
		}
	}
	return maxS;
}

int maxSum2(int array[], int length){
	
}
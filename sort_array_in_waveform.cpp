/*
Array in wave form means the following
a(0) >= a(1) <= a(2) >= a(3) <= .........
*/

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void fun(int *arr, int n){
	for(int i=0; i<n ;i+=2){
		if(i>0 and arr[i] < arr[i-1])
			swap(&arr[i], &arr[i-1]);
		if(i<n-1 and arr[i] < arr[i+1])
			swap(&arr[i], &arr[i+1]);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int arr[n];
		for(int i =0 ; i< n ;i++)
			cin >> arr[i];

		fun(arr, n);

		for(int i = 0 ; i<n ; i++)
			cout << arr[i] << " ";

		cout << "\n";
	}
}
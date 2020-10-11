/*
To find the next greatest number with same set of digits
There might be various greater number possible but we need
to find number which is greater than the number and is 
minimum of the two.
*/

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void fun(int *arr, int n){
	int pt = -1;
	for(int i = n-1; i>=0 ; i--){
		if(i<n-1 and i>=0 and arr[i] <arr[i+1]){
			pt = i;
			break;
		}
	}
	int ming = pt+1;
	if(pt == -1){cout << "Not possible\n"; return;}
	for(int i=pt+1 ; i <n; i++){
		if(arr[i] > arr[pt] and arr[i] < arr[ming])
			ming = i;
	}
	swap(&arr[pt], &arr[ming]);
	sort(arr+pt+1, arr+n);
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
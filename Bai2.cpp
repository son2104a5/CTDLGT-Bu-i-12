#include <stdio.h>
#include <stdlib.h>

int findMin(int arr[], int n){
	int min = arr[0];
	for(int i = 0; i < n; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int main(){
	int n;
	int arr[n];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("%d", findMin(arr, n));
	return 0;
}


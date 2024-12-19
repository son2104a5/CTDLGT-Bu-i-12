#include <stdio.h>
#include <stdlib.h>

int findMax(int arr[], int n, int max){
	for(int i = 0; i < n; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int n;
	int arr[n];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("%d", findMax(arr, n, 0));
	return 0;
}


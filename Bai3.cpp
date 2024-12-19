#include <stdio.h>
#include <stdlib.h>

void symmetricalPair(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                printf("Cap doi xung: (%d, %d)\n", arr[i], arr[j]);
                count++;
            }
        }
    }
    if(count == 0){
        printf("Khong co phan tu doi xung trong mang\n");
    }
}


int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	symmetricalPair(arr, n);
	return 0;
}


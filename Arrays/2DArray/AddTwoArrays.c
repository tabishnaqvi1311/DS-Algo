#include <stdio.h>

int AddTwoMatrices(int arr[3][3], int arr2[3][3]){
    int sum[3][3] = {0};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[3][3] = {2, 4, 6, 8 ,10, 12, 14, 16, 18};

    AddTwoMatrices(arr, arr2); 

    return 0;
}
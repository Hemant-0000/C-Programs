#include <stdio.h>
#include <stdbool.h>

bool isSubset(int arr1[], int arr2[], int m, int n){
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (arr2[i] == arr1[j])
                break;
        }
        if (j == m) return 0;
    }
    return 1;
}

int main(){
    int m, n;
    printf("Enter the size of array 1: ");
    scanf("%d", &m);

    printf("Enter the size of array 2: ");
    scanf("%d", &n);

    int arr1[m], arr2[n];
    int i;

    printf("Enter the array 1 elements: ");
    for (i = 0; i < m; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the array 2 elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr2[i]);
    }

    if(isSubset(arr1, arr2, m, n)){
        printf("Array2 is a subset of Array1");
    }else{
        printf("Array2 is not a subset of Array1");
    }

    return 0;
}
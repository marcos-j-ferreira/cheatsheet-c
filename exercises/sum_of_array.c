#include <stdio.h>

int main (){
    
    int arr[] = {1,2,3,4,5,6,7,1};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    
    for(int i =0; i < size; i++){
    sum += arr[i];
    }
    
    printf("A soma da array é: %d\n",sum);
    
    return 0;
}
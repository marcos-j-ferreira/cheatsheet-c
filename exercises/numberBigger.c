#include <stdio.h>

int main (void){
    
    int arr[] = {1,22,3,4,6};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int number = arr[0];
    
    for(int i = 0; i < size; i++){
        if(number < arr[i]){
            number = arr[i];
        }
    }
    printf("%d\n", number);
    
    return 0;
}
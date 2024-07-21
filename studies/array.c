#include <stdio.h>

int main(void){
    
    int arr[/*escreva aqui o tamanho*/] = {1,2,3,4,5};
    
    int len = sizeof(arr) / sizeof(arr[0]); // saber o tamanho
    
    for(int i =0; i < len; i++){
        printf("%d\n", arr[i]);
        
    }
    printf("\n");
    int matriz[3][2] = {
        {1,2},
        {3,4},
        {5,6}
        
    };
    
    for(int i =0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}
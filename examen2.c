#include<stdio.h>

int ordenamiento(int *list, int n){
    int min;

    for(int i=1; i < n;i++){
        min = i;

        for (int j = 0; j < n; j++){
            if(list[j] < list[min]){
                min = j;
            }   
        }
        
        if (min != i){
            list[min] = list[i];
            list[i] = list[min];
        }
    }

}


int main(){
    int *list;
    int tam;

   printf("Tamaño del array: ");
   scanf("%d",&tam);
   ordenamiento(*list, tam);
   
}
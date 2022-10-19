
#include<stdio.h>
int main(){
    int arr[10] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, sum=0;
    int largest = arr[0];



    for(i=0; i < 10; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }


    printf("The Largest Value Of Array: %d ", largest);
    return 0;
}

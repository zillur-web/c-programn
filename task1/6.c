
#include <stdio.h>

int main() {
    int arr[10] = {6,4,2.54,8,9,9,65,100,99};
    int i, largest=0, second=0;
    for(i=0; i < 10; i++){
        if(largest < arr[i]){
            second = largest;
            largest = arr[i];
        }
        else if(second < arr[i]){
            second = arr[i];
        }
    }

    printf("second largest = %d",second);


}

#include <stdio.h>
int main(){
    int array[100], n, i, position;

    printf("Enter Array Range: ");
    scanf("%d",&n);
    printf("Enter Array Value: ");

    for(i=1; i<=n; i++){
        scanf("%d",&array[i]);
    }
    printf("Enter position of delete array value: ");
    scanf("%d",&position);

    for(i=position; i<=n; i++){
        array[i] = array[i+1];
    }
    n= n-1;

    printf("New Array Value: ");
    for(i=1; i<=n; i++){
        printf("%d ", array[i]);
    }

    return 0;





}

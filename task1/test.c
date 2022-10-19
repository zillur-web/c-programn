#include <stdio.h>
int main() {
    int i, n, j, search, notfind = 0;
    printf("Enter Array Range: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter Array Value: ");
    for(i=1; i<=n; i++){
       scanf("%d",&arr[i]);
    }

    printf("Enter Array Value: ");
    scanf("%d",&search);

    for(i=1; i<=n; i++){
        if(arr[i] == search){
            notfind = 1;
            printf("Location : %d", i);
        }
    }




    if(notfind == 0){
        printf("Not Found! :");
    }
    return 0;
}

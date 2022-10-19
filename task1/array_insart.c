#include <stdio.h>
int main() {
    int arr[100], i, n, pos, value;
    printf("Enter Array Range: ");
    scanf("%d",&n);

    printf("Enter Array Value: ");
    for(i=1; i<=n; i++){
       scanf("%d",&arr[i]);
    }
    printf("Enter New Value Insert Position: ");
    scanf("%d",&pos);

    printf("Enter New Value : ");
    scanf("%d",&value);

    for(i=n; i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    n = n+1;

    printf("New Array : ");
    for(i=1; i<=n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    int sum = 0, i;

    float avg = 0;
    printf("Enter Array Range: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter Array Value: ");
    for(i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }

    for(i = 1; i <= n; i++){
        sum = sum + arr[i];
    }

    avg = (float)sum / n;


    printf("%.2f",avg);

    return 0;

}

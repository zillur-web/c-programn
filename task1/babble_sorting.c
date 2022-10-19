
#include<stdio.h>

int main(){

    int i, n, j, temp;
    printf("Enter Array Range: ");
    scanf("%d",&n);
    int arra[n];

    printf("Enter Array Value: ");
    for(i=1; i<=n; i++){
       scanf("%d",&arra[i]);
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            if(arra[j] > arra[j+1]){
                temp = arra[j];
                arra[j] = arra[j+1];
                arra[j+1] = temp;
            }
        }
    }

    for(i=1; i<= n;i++){
        printf("%d ",arra[i]);
    }

    return 0;
}


#include <stdio.h>
int main() {
//    int arr[100], i, n, value, position;
//
//    printf("Enter number of element in array N : ");
//    scanf("%d",&n);
//
//    printf("Enter %d element \n",n);
//
//    for(i=0; i<n; i++){
//        scanf("%d",&arr[i]);
//    }
//    printf("Enter position where you wish to insert new element : \n");
//    scanf("%d",&position);
//
//    printf("Enter value to insert : \n");
//    scanf("%d", &value);
//
//    position = position-1;
//    for(i=n; i>=position; i--){
//        arr[i+1] = arr[i];
//    }
//    arr[position] = value;
//    n =n+1;
//
//    printf("New Array Values : \n");
//    for(i=0; i< n; i++){
//       printf("%d ", arr[i]);
//    }
//    return 0;


 int array[50] i, n, value, position;

    printf("Enter number of element in array N : ");
    scanf("%d",&n);

    printf("Enter %d element \n",n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position where you wish to Delete element : \n");
    scanf("%d",&position);

    position = position-1;
    for(i=position; i < n; i++){
        arr[i] = arr[i+1];
    }
    n =n-1;

    printf("New Array Values : \n");
    for(i=0; i< n; i++){
       printf("%d ", arr[i]);
    }
    return 0;
}

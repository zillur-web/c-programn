#include <stdio.h>
int main(){
  int array[100], search, i, n, notfind = 0;
  printf("Enter number of elements in array: ");
  scanf("%d", &n);

  printf("Enter array elements :", n);

  for (i = 1; i <= n; i++){
    scanf("%d", &array[i]);
  }

  printf("Enter a number to search :");
  scanf("%d", &search);

  for (i = 1; i <= n; i++){
    if (array[i] == search){
        notfind = 1;
        printf("%d is present at location %d ", search, i);
        break;
    }
  }

  if(notfind == 0){
    printf("%d isn't present in the array ", search);
  }
  return 0;
}

#include <stdio.h>
void swap(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(int arr[],int l,int r){ 
    if(l>r){
      return;
    }
    swap(&arr[l], &arr[r]);
    reverse(arr,l+1,r-1);
}



int num;
int main() {
  int no_ele;
  printf("Enter an number of element: ");
  scanf("%d", &no_ele);
  int arr[no_ele];
  int i=0;
  while(i<no_ele){
    int item;
    printf("Enter an integer: ");
    scanf("%d", &item);
    arr[i]=item;
    i++;
  }
  int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
      printf("%d",arr[i]);
    }
    return 0;
}
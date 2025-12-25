#include <stdio.h>
void sum(int n,int total){ 
    if(n==0){
      printf("sum of N numbers %d",total);
      return;
    }
    sum(n-1,n+total); 
}
int num;
int main() {
  int total=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    sum(num,total);
    return 0;
}
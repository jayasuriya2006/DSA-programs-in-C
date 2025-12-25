#include <stdio.h>
void fact(int total,int n){ 
    if(n<=0){
      printf("%d\n", total); 
      return;
    }
    fact(total*n,n-1);
   
}
int num;
int main() {
    printf("Enter an integer: ");
    scanf("%d", &num);
    fact(1,num);
    return 0;
}
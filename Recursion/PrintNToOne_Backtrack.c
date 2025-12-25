#include <stdio.h>
void Backtrack(int i,int n){ 
    if(n<i)
      return;
    Backtrack(i+1,n);
    printf("%d\n", i); 
}
int num;
int main() {
    printf("Enter an integer: ");
    scanf("%d", &num);
    Backtrack(1,num);
    return 0;
}
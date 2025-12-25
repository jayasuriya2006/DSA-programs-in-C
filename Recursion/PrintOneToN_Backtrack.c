#include <stdio.h>
void Backtrack(int n){ 
    if(n<=0)
      return;
    Backtrack(n-1);
    printf("%d\n", n); 
}
int num;
int main() {
    printf("Enter an integer: ");
    scanf("%d", &num);
    Backtrack(num);
    return 0;
}
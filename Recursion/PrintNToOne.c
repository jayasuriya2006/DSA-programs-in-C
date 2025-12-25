#include <stdio.h>
void printNToOne(int n) {
    if(0<=n)
        return;
    printf("%d\n", n);
    printNToOne(n-1);
    
}
int num;
int main() {
    printf("Enter an integer: ");
    scanf("%d", &num);
   printNToOne(num);
    return 0;
}
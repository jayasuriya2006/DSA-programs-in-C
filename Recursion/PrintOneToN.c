#include <stdio.h>
void printOneToN(int n,int i) {
    if(i>n)
        return;
    printf("%d\n", i);
    printOneToN(n,i+1);
    
}
int num;
int main() {
    printf("Enter an integer: ");
    scanf("%d", &num);
   printOneToN(num,1);
    return 0;
}

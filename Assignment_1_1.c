//#given a sorted element and num x ,search two elements and sum should be x

#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int x = 4;
    int prev = a[0];
    int next = a[4];  // Last element (a[-1] in Python)
    
    while (prev <= next) {
        int s = prev + next;
        if (s == x) {  // x
            break;
        } else if (s < x) {
            prev++;
        } else {
            next--;
        }
    }
    
    printf("%d %d\n", prev, next);
    return 0;
}
//implement binary search using divide and conquer
#include <stdio.h>

int main(){
    int a[] = {1,2,3,4,5,6};
    int target = 5;int left;int right;
    left = 0;
    int n = sizeof(a) / sizeof(a[0]);
    right = n-1;
    while (left<=right){
        int mid = left + (right - left)/2;
        int mid_e = a[mid];
        if (target == mid_e){
            printf("Found\n");
            break;
        }
        else if (target<mid_e){
            right = mid-1;
        }
        else
            left = mid+1;

    }
printf("Not found\n");
return 0;
}
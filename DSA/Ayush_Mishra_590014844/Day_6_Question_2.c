#include <stdio.h>
#include <stdbool.h>
bool isStrictlyIncreasing(int nums[], int size) {
    for (int i = 1; i < size; i++) {
        if (nums[i] <= nums[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    if (isStrictlyIncreasing(nums, size)) {
        printf("Array is strictly increasing.\n");
    } else {
        printf("Array is not strictly increasing.\n");
    }
    return 0;
}

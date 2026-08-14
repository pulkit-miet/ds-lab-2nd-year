#include <stdio.h>
int main() {
    int a[100], n, key, i, low, high, mid, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted elements:\n");
    for (i = 0; i < n; i++) { scanf("%d", &a[i]); }
    printf("Enter key to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) { mid = (low + high) / 2;
        if (a[mid] == key) {
            found = 1;
            printf("Found at position %d\n", mid + 1);
            break;
        } else if (a[mid] < key) { low = mid + 1; } 
        else { high = mid - 1; } }
    if (!found) { printf("Not found\n"); }
    return 0; }

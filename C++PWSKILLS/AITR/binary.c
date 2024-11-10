#include <stdio.h>
#include <string.h>
int main() {
    int n, i;
    char names[5][30];
    char key[30];
    int Flag = 0;

    printf("Enter number of names in contact application (max 5): ");
    scanf("%d", &n);

    // Ensure n does not exceed maximum capacity
    if (n > 5) {
        printf("Maximum capacity exceeded. Exiting...\n");
        return 1;
    }

    printf("Enter %d names in alphabetical order:\n", n);
    for (i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("Enter name to be searched: ");
    scanf("%s", key);

    // Binary search
    int beg = 0, end = n - 1,mid=-1;
    while (beg <= end) {
         int mid = (beg + end) / 2;
        if (strcmp(names[mid], key) == 0) {
            Flag = 1;
            i = mid;
            break;
        } else if (strcmp(names[mid], key) < 0) {
            beg=mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (Flag == 1) {
        printf("Name found at position %d\n", i + 1);
    } else {
        printf("Name not found\n");
    }

    return 0;
}
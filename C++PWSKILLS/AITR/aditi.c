#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    char names[5][30]; 
    char key[30];
    int Flag = 0;

    printf("Enter number of names in contact application: ");
    scanf("%d", &n);

    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) { 
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("Enter name to be searched: ");
    scanf("%s", key);

    // Linear search
    for (i = 0; i < n; i++) {  
        if (strcmp(names[i], key) == 0) {  
            Flag = 1;
            break;
        }
    }

    if (Flag == 1) {
        printf("Name found at position %d\n", i + 1);
    } else {
        printf("Name not found\n");
    }

    return 0;
}




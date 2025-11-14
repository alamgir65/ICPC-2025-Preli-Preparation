#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    char line[101];  // Maximum 100 characters + 1 for null terminator
    
    scanf("%d\n", &n);
    
    for (int i = 0; i < n; i++) {
        fgets(line, sizeof(line), stdin);
        
        // Remove newline character if present
        int len = strlen(line);
        if (len > 0 && line[len-1] == '\n') {
            line[len-1] = '\0';
        }
        
        // sizeof(line) gives the array size (101)
        // strlen(line) gives the length up to first null character
        printf("%lu %lu\n", sizeof(line), strlen(line));
    }
    
    return 0;
}
// Program to store & display the data of 5 employees using struct.

#include <stdio.h>

struct emp {
    int id;
    char name[50];
    int salary;
};

int main() {
    
    int i, j;
    struct emp e[5];
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &e[i].id);
        scanf("%s", &e[i].name);
        scanf("%d", &e[i].salary);
    }
    
    for (j = 0; j < 5; ++j) {
        printf("\n---------\n");
        
        printf("name = %s\n", e[j].name);
        printf("id = %d\n", e[j].id);
        printf("salary = %d\n", e[j].salary);
    }
    
    return 0;
}

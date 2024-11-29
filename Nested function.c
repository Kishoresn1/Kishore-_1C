#include <stdio.h>
struct address {
    char city[50];
    int pin;
};
struct person {
    char name[50];
    struct address addr;
    };
    int main() {
        struct person p;
        printf("enter name:");
        scanf("%s",&p.name);
        printf("enter ciry:");
        scanf("%s",&p.addr.city);
        printf("enter pin:");
        scanf("%s",&p.addr.pin);
        printf("\nperson details\n");
        printf("name:%s\ncity:%s\npin:%d\n",p.name,p.addr.city,p.addr.pin);
        return 0;
    }

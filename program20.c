/*
 * Program to display the multiplication of numbers using a normal integer list.
 */
#include <stdio.h>

int multiplyList(int list[], int size) {
    int result = 1;
    for (int i = 0; i < size; i++) {
        result *= list[i];
    }
    return result;
}

void printList(int list[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

int main() {
    int list[] = {1, 2, 3, 4, 5};
    int size = sizeof(list) / sizeof(list[0]);

    printf("List: ");
    printList(list, size);

    int result = multiplyList(list, size);
    printf("Multiplication of all elements: %d\n", result);

    return 0;
}

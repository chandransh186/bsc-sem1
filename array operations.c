#include <stdio.h>

void insert(int arr[], int *size, int element, int position) {
    for (int i = *size; i >= position; i--) arr[i] = arr[i - 1];
    arr[position - 1] = element;
    (*size)++;
}

void delete(int arr[], int *size, int position) {
    for (int i = position - 1; i < *size - 1; i++) arr[i] = arr[i + 1];
    (*size)--;
}

int search(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) if (arr[i] == element) return i + 1;
    return -1;
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[10];
    int size = 0;

    printf("Enter the initial array elements (max 10): ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        size++;
        if (getchar() == '\n') break;
    }

    printf("Original array: ");
    display(arr, size);

    int element, position;
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert (1-%d): ", size + 1);
    scanf("%d", &position);
    insert(arr, &size, element, position);
    printf("Array after insertion: ");
    display(arr, size);

    printf("Enter the position to delete (1-%d): ", size);
    scanf("%d", &position);
    delete(arr, &size, position);
    printf("Array after deletion: ");
    display(arr, size);

    printf("Enter the element to search: ");
    scanf("%d", &element);
    int found_position = search(arr, size, element);
    if (found_position != -1) printf("Element %d found at position %d.\n", element, found_position);
    else printf("Element %d not found in the array.\n", element);

    return 0;
}

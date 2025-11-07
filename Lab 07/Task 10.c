#include <stdio.h>

int main() {
    int n;
    printf("How many elements do you want to input? ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++) {
        printf("Index %d: %d\n", i, arr[i]);
    }

    int index, newValue;
    printf("\nEnter the index of the element you want to modify: ");
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Invalid index!\n");
        return 0;
    }
    else{
	    printf("Enter new value for index %d: ", index);
	    scanf("%d", &newValue);
	    arr[index] = newValue;
	
	    printf("\nUpdated array:\n");
	    for (int i = 0; i < n; i++) {
	        printf("Index %d: %d\n", i, arr[i]);
	    }
	}

    return 0;
}

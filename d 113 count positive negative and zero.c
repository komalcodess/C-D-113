#include <stdio.h>

int main() {
    int arr[7] = {3, -1, 0, 5, -7, 0, 4};
    int pos = 0, neg = 0, zero = 0;

    for (int i = 0; i < 7; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive = %d\n", pos);
    printf("Negative = %d\n", neg);
    printf("Zero = %d", zero);

    return 0;
}

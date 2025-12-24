#include <stdio.h>



// void main() {
//     int arr[] = {64, 34, 25, 12, 22};
//     int n = 5; 
//     int i, j, temp;

    
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                  temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     printf("Sorted array: ");
//     for (j= 0; j < n; j++) {
//         printf("%d ", arr[j]);
//     }
// }
// def fibonacci(n):
//     # Base Case: return n if it is 0 or 1
//     if n <= 1:
//         return n
//      else:
//         return fibonacci(n - 1) + fibonacci(n - 2)
// print(fibonacci(7)) # Output will be 13




// void sortArray(int *ptr, int n) {
//     int i, j, temp;

//     for (i = 0; i < n; i++) {
//         for (j = i + 1; j < n; j++) {
//             if (*(ptr + j) < *(ptr + i)) {
//                 temp = *(ptr + i);
//                 *(ptr + i) = *(ptr + j);
//                 *(ptr + j) = temp;
//             }
//         }
//     }
// }

// int main() {
//     int numbers[100];
//     int n, i;

//     printf("Enter the count of numbers: ");
//     scanf("%d", &n);

//     printf("Enter the numbers: \n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", (numbers + i));
//     }

//     sortArray(numbers, n);

//     printf("Sorted numbers: \n");
//     for (i = 0; i < n; i++) {
//         printf("%d ", *(numbers + i));
//     }
    
//     return 0;
// }




// void swap(int *x, int *y) {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int a, b;

//     printf("Enter value for a: ");
//     scanf("%d", &a);

//     printf("Enter value for b: ");
//     scanf("%d", &b);

//     printf("Before swapping: a = %d, b = %d\n", a, b);

//     swap(&a, &b);

//     printf("After swapping: a = %d, b = %d\n", a, b);

//     return 0;
// }



// int swap(int *x, int *y) {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(){
//     int a=3;
//     int b=4;

//     swap(&a,&b);
    
//     printf("a=%d,b=%d",a,b);
//     return 0;

// }














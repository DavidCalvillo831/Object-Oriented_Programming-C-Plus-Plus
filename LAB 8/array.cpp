#include <iostream> 
#include <vector> 
void printMemArr(const int * arr, int size)
 {printf("Array Each int is worth %lu bytes\n", sizeof(arr[0]));
for(int i=0; i < size; i++)
 {printf("Value:%i at Memory Location: %p\n", arr[i], arr + i); 
 }
 }
 void incArrBy10(int * arr, int size) { // void incArrBy10(int arr[], int size)
for(int i = 0; i < size; i++) {
arr[i] += 10;}
 } 
 int main() { 
    const int size = 5;
    int arr[size];
    for(int i = 0; i < size; i ++) { 
        arr[i] = 100 + i; 
    }
    printf("Before------------/n"); 
    printMemArr(arr, size);
    incArrBy10(arr, size); 
    printf("After------------/n"); 
    printMemArr(arr, size); 
    return 0; 
 }

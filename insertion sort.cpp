#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
   for (int i = n - 1; i > 0; i--) {
      int j = i - 1, key = arr[i];
      while (j >= 0 && arr[j] > key) {
         arr[j+1] = arr[j];
         j--;
      }
      arr[j+1] = key;
   }
}

int main() {
   int arr[] = { 8, 3, 1, 6, 9, 2 };
   int n = sizeof(arr) / sizeof(arr[0]);

   insertionSort(arr, n);

   for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;

   return 0;
}
